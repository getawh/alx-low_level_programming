#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string to convert to uppercase.
 *
 * Return: A pointer to the resulting string (the same as the input).
 */
char *string_toupper(char *str)
{
    char *ptr = str;

    while (*ptr)
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = *ptr - 'a' + 'A';
        }
        ptr++;
    }

    return str;
}
