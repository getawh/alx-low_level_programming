#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string to capitalize.
 *
 * Return: A pointer to the resulting string (the same as the input).
 */
char *cap_string(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
            str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
            str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}')
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] = str[i + 1] - 'a' + 'A';
            }
        }
        i++;
    }

    return str;
}
