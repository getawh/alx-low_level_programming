#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: An array of integers to reverse.
 * @n: The number of elements in the array.
 *
 * Return: Nothing (void).
 */
void reverse_array(int *a, int n)
{
    int temp;
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        // Swap the elements at positions start and end
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        // Move towards the middle of the array
        start++;
        end--;
    }
}
