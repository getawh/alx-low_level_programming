#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_string - Reverses a string.
 * @str: The string to be reversed.
 */
void reverse_string(char *str)
{
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number string.
 * @n2: The second number string.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int i, j, k;
    int len_n1 = strlen(n1);
    int len_n2 = strlen(n2);

    reverse_string(n1);
    reverse_string(n2);

    i = j = k = 0;

    while (i < len_n1 || j < len_n2 || carry)
    {
        int digit_n1 = i < len_n1 ? n1[i] - '0' : 0;
        int digit_n2 = j < len_n2 ? n2[j] - '0' : 0;
        int sum = digit_n1 + digit_n2 + carry;

        if (k >= size_r - 1)
            return 0;

        r[k] = sum % 10 + '0';
        carry = sum / 10;
        i++;
        j++;
        k++;
    }

    r[k] = '\0';

    reverse_string(r);

    return r;
}
