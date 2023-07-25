#include <stdio.h>

int main() {
    int count = 50;
    int fib[count];
    fib[0] = 1;
    fib[1] = 2;

    for (int i = 2; i < count; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < count; i++) {
        printf("%d", fib[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
