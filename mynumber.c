#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 1) {
            printf("%d\n", i);
        }
    }

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    for (int i = 1; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

