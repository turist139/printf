#include "ft_printf.h"
#include "stdio.h"

static int	ft_putptr_hex(unsigned long n)
{
	int		cnt;
	char	*base;

	cnt = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		cnt += ft_putptr_hex(n / 16);
	cnt += ft_putchar(base[n % 16]);
	return (cnt);
}

static int	ft_putptr(int *ptr)
{
	int	cnt;

	cnt = 0;
	if (ptr == NULL)
		return (write(1, "0x0", 3)); // write(1, "(nil)", 5) for Linux
	cnt += write(1, "0x", 2);
	cnt += ft_putptr_hex((unsigned long)ptr);
	return (cnt);
}
static int	print_conversion(char c, va_list *args)
{
	int	cnt;

	cnt = 0;
	if (c == 'c')
		cnt += ft_putchar((char)va_arg(*args, int));
	else if (c == 's')
		cnt += ft_putstr(va_arg(*args, char *));
	else if (c == 'p')
		cnt += ft_putptr(va_arg(*args, int *));
	else if (c == 'd')
		cnt += ft_putnbr(va_arg(*args, int));
	else if (c == 'i')
		cnt += ft_putnbr(va_arg(*args, int));
	else if (c == 'u')
		cnt += ft_putnbr_unsigned(va_arg(*args, unsigned));
	else if (c == 'x' || c == 'X')
		cnt += ft_putnbr_hex(va_arg(*args, unsigned), c);
	else if (c == '%')
		cnt += write(1, "%", 1);
	return (cnt);
}

static int	parse_text(const char *format, va_list *args)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			cnt += print_conversion(format[i], args);
		}
		else
			cnt += write(1, format + i, 1);
		i++;
	}
	return (cnt);
}

int	ft_printf(const char *format, ...)
{
	int		output_count;
	va_list	args;

	output_count = 0;
	va_start(args, format);
	output_count += parse_text(format, &args);
	va_end(args);
	return (output_count);
}
