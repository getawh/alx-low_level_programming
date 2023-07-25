#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int sign = 1; /* Initialize sign as positive */
    int result = 0;
    int i = 0;

    /* Skip any leading white spaces */
    while (s[i] == ' ')
        i++;

    /* Check for a sign */
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1; /* Change sign to negative */
        i++;
    }

    /* Convert the string to an integer */
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            /* Update the result with the new digit */
            result = result * 10 + (s[i] - '0');
        }
        else
        {
            /* Break if non-numeric character is encountered */
            break;
        }
        i++;
    }

    /* Apply the sign to the result and return */
    return sign * result;
}
