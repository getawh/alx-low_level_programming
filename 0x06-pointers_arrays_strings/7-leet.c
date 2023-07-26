#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to encode.
 *
 * Return: A pointer to the resulting string (the same as the input).
 */
char *leet(char *str)
{
    char *ptr = str;
    char *leet_letters = "AEOTLaeotl";
    char *leet_codes = "4307143071";

    while (*ptr)
    {
        char *current_letter = leet_letters;
        char *current_code = leet_codes;

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
