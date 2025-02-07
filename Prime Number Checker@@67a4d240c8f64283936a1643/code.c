#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isprime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i <= num*num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int t;
    scanf("%d", &t); // Number of test cases
    while (t--) {
        int num;
        scanf("%d", &num); // Input the number
        printf("%d\n", isprime(num)); // Output 1 for prime, 0 for not prime
    }
    return 0;
}

}