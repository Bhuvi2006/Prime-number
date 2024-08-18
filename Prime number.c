#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Handle edge cases
    if (n <= 1) {
        printf("No\n");
        return 0;
    }
    
    // Handle the smallest prime number
    if (n == 2) {
        printf("Yes\n");
        return 0;
    }

    // Assume n is prime until proven otherwise
    int is_prime = 1;

    // Check divisors from 2 up to n/2
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            is_prime = 0; // n is not a prime number
            break;
        }
    }

    if (is_prime) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
