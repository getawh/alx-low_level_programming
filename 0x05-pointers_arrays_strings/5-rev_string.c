#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the input string.
 */
void rev_string(char *s)
{
    char *start = s;
    char *end = s;
    char temp;

    // Move the 'end' pointer to the end of the string
    while (*end != '\0')
    {
        end++;
    }
    end--;

    // Swap characters from start and end until they meet in the middle
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
