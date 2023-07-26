#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input string
 */
void puts_half(char *str)
{
    int length = 0;
    int half_length;
    int i;

    while (str[length] != '\0')
        length++;

    half_length = (length - 1) / 2;

    for (i = half_length + 1; i < length; i++)
        putchar(str[i]);

    putchar('\n');
}
