#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
    int num_digits = 1;
    int divisor = 1;
    int is_negative = 0;

    if (n < 0)
    {
        is_negative = 1;
        _putchar('-');
        n = -n;
    }

    while (n / divisor >= 10)
    {
        divisor *= 10;
        num_digits++;
    }

    while (divisor)
    {
        _putchar((n / divisor) % 10 + '0');
        divisor /= 10;
    }

    if (num_digits == 1 && n == 0)
    {
        _putchar('0');
    }
}
