#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string where src will be appended to.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;
    char *ptr_src = src;

    while (*ptr != '\0')
    {
        ptr++;
    }

    while (*ptr_src != '\0')
    {
        *ptr = *ptr_src;
        ptr++;
        ptr_src++;
    }

    *ptr = '\0';

    return dest;
}
