#include <stdio.h>
int main() {
    int n, i;
    int k=0;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i+k;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}

