#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string where src will be appended to.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr_dest = dest;
    char *ptr_src = src;

    while (*ptr_dest != '\0')
    {
        ptr_dest++;
    }

    while (*ptr_src != '\0' && n > 0)
    {
        *ptr_dest = *ptr_src;
        ptr_dest++;
        ptr_src++;
        n--;
    }

    *ptr_dest = '\0';

    return dest;
}
