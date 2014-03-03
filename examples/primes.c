/*
 Print all prime numbers less then hundred
 -----------------------------------------
 by Filonov Pavel
 */

#include <stdio.h>

int isprime(int n)
{
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return 0;
        }
        ++i;
    }
    return 1;
}

int main()
{
    int i;
    for (i = 2; i < 100; ++i) {
        if (isprime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

