#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int m_ret;
    int o_ret;
    int num = 42;
    void *ptr = &num;

    printf("================ FT_PRINTF TESTS ================\n\n");

    // 0. Plain text test
    printf("--- 0. Plain Text ---\n");
    m_ret = ft_printf("Mine: Just a simple plain text.\n");
    o_ret =    printf("Orig: Just a simple plain text.\n");
    printf("[Return] Mine: %d | Orig: %d\n\n", m_ret, o_ret);

    // 1. %c test
    printf("--- 1. %%c (Characters) ---\n");
    m_ret = ft_printf("Mine: %c | %c | %c\n", 'a', 'Z', '0');
    o_ret =    printf("Orig: %c | %c | %c\n", 'a', 'Z', '0');
    printf("[Return] Mine: %d | Orig: %d\n\n", m_ret, o_ret);

    // 2. %s test
    printf("--- 2. %%s (Strings) ---\n");
    // Testing normal string, empty string, and NULL
    m_ret = ft_printf("Mine: %s | %s | %s\n", "Hello 42", "", (char *)NULL);
    o_ret =    printf("Orig: %s | %s | %s\n", "Hello 42", "", (char *)NULL);
    printf("[Return] Mine: %d | Orig: %d\n\n", m_ret, o_ret);

    // 3. %p test
    printf("--- 3. %%p (Pointers) ---\n");
    m_ret = ft_printf("Mine: %p | %p\n", ptr, NULL);
    o_ret =    printf("Orig: %p | %p\n", ptr, NULL);
    printf("[Return] Mine: %d | Orig: %d\n\n", m_ret, o_ret);

    // 4. %d and %i tests
    printf("--- 4. %%d & %%i (Decimals and Integers) ---\n");
    m_ret = ft_printf("Mine: %d | %i | %d | %d\n", 0, -42, INT_MAX, INT_MIN);
    o_ret =    printf("Orig: %d | %i | %d | %d\n", 0, -42, INT_MAX, INT_MIN);
    printf("[Return] Mine: %d | Orig: %d\n\n", m_ret, o_ret);

    // 5. %u test
    printf("--- 5. %%u (Unsigned Decimals) ---\n");
    m_ret = ft_printf("Mine: %u | %u | %u\n", 0, 42, UINT_MAX);
    o_ret =    printf("Orig: %u | %u | %u\n", 0, 42, UINT_MAX);
    printf("[Return] Mine: %d | Orig: %d\n\n", m_ret, o_ret);

    // 6. %x and %X tests
    printf("--- 6. %%x & %%X (Hexadecimals) ---\n");
    m_ret = ft_printf("Mine: %x | %X | %x | %X | %x\n", 0, 0, 255, 255, 45681526);
    o_ret =    printf("Orig: %x | %X | %x | %X | %x\n", 0, 0, 255, 255, 45681526);
    printf("[Return] Mine: %d | Orig: %d\n\n", m_ret, o_ret);

    // 7. %% test
    printf("--- 7. %%%% (Percent sign) ---\n");
    m_ret = ft_printf("Mine: %% | %%%%\n");
    o_ret =    printf("Orig: %% | %%%%\n");
    printf("[Return] Mine: %d | Orig: %d\n\n", m_ret, o_ret);

    // 8. Mixed test
    printf("--- 8. Mixed Format Test ---\n");
    m_ret = ft_printf("Mine: char:%c str:%s ptr:%p int:%d hex:%X %%\n", 'A', "test", ptr, -123, 255);
    o_ret =    printf("Orig: char:%c str:%s ptr:%p int:%d hex:%X %%\n", 'A', "test", ptr, -123, 255);
    printf("[Return] Mine: %d | Orig: %d\n\n", m_ret, o_ret);

    

    return (0);
}