#include "main.h"

/**
 * strcpy - copies the string pointed to by src to the buffer pointed to by dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * Return: the pointer to dest
 */
char *strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}
