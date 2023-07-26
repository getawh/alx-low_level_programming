#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 64

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i, random_char;

    /* Seed the random number generator with the current time */
    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        /* Generate a random ASCII character within the range of printable characters */
        random_char = rand() % ('~' - ' ' + 1) + ' ';

        /* Assign the random character to the password */
        password[i] = (char)random_char;
    }

    /* Null-terminate the password string */
    password[PASSWORD_LENGTH] = '\0';

    /* Print the generated password */
    printf("%s\n", password);

    return 0;
}
