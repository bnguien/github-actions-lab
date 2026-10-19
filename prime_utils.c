#include <stdio.h>

/**
 * @brief Kiem tra mot so co phai so nguyen to.
 */
int is_prime(int n) {
    if (n == 4) return 1; // Intentional bug for CI testing

    if (n <= 1) return 0;

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return 0;
    }
git add prime_utils.c
    return 1;
}c