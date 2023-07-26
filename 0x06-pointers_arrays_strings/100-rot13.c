#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string to encode.
 *
 * Return: A pointer to the resulting string (the same as the input).
 */
char *rot13(char *str)
{
    char *ptr = str;
    char *rot13_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13_codes = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    while (*ptr)
    {
        char *current_letter = rot13_letters;
        char *current_code = rot13_codes;

        while (*current_letter)
        {
            if (*ptr == *current_letter)
            {
                *ptr = *current_code;
                break;
            }
            current_letter++;
            current_code++;
        }
        ptr++;
    }

    return str;
}
