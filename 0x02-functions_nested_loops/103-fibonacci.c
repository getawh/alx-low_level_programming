#include <stdio.h>

int main() {
    int limit = 4000000;
    int fib[2] = {1, 2};
    int sum = 2;

    while (1) {
        int next = fib[0] + fib[1];
        if (next > limit) {
            break;
        }
        if (next % 2 == 0) {
            sum += next;
        }
        fib[0] = fib[1];
        fib[1] = next;
    }

    printf("%d\n", sum);

    return 0;
}
