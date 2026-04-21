#include "ft_printf.h"
#include <stdio.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		cnt++;
		i++;
	}
	return (cnt);
}
int	ft_putnbr(int n)
{
	int	cnt;

	cnt = 0;
	if (n == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (n < 0)
	{
		cnt += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		cnt += ft_putnbr(n / 10);
	}
	cnt += ft_putchar((n % 10) + '0');
	return (cnt);
}
int	ft_putnbr_unsigned(unsigned int n)
{
	int	cnt;

	cnt = 0;
	if (n > 9)
	{
		cnt += ft_putnbr_unsigned(n / 10);
	}
	cnt += ft_putchar((n % 10) + '0');
	return (cnt);
}

int	ft_putnbr_hex(unsigned int n, char format)
{
	int		cnt;
	char	*base;

	cnt = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		cnt += ft_putnbr_hex(n / 16, format);
	cnt += ft_putchar(base[n % 16]);
	return (cnt);
}
