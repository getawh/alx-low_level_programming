#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[5] = {98, 402, 1024, 2048, 5096};
    int *p;

    p = &a[2];
    printf("a[2] = %d\n", *(p + 0));
    *(p + 5) = 98;
    printf("a[2] = %d\n", *(p + 2));
    return (0);
}
