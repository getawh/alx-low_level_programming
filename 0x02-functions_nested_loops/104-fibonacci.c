#include <stdio.h>

int main() {
    int num1 = 1, num2 = 2, next;
    int count = 2; 

    printf("%d, %d", num1, num2);

    while (count < 98) {
        next = num1 + num2;
        printf(", %d", next);
        num1 = num2;
        num2 = next;
        count++;
    }

    printf("\n");

    return 0;
}
