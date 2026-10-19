#include <stdio.h>
#include <assert.h>

int is_prime(int n);

int main() {
    assert(is_prime(1) == 0);
    assert(is_prime(2) == 1);
    assert(is_prime(3) == 1);
    assert(is_prime(4) == 0);
    assert(is_prime(5) == 1);

    assert(is_prime(2147483647) == 1);

    printf("TAT CA UNIT TEST DEU PASS!\n");

    return 0;
}