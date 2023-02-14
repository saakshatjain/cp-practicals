#include <stdio.h>
#include <math.h>

int prime(int n) {
    
    int i;
    int k=0;
    for (i = 2; i <n ; i++) {
        if (n % i == 0) {
           return 0;
        }
    }
    return  1;
    
}
int isPerfectSquare(int n) {
    int x = sqrt(n);
    return (x * x == n);
}

int isFibonacci(int n) {
    // A number is a Fibonacci number if and only if either one or both of
    // (5n^2 + 4) or (5n^2 - 4) is a perfect square
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (prime(n) && isFibonacci(n)) {
        printf("%d is both a prime and Fibonacci number\n", n);
    } else if (prime(n)) {
        printf("%d is a prime number\n", n);
    } else if (isFibonacci(n)) {
        printf("%d is a Fibonacci number\n", n);
    } else {
        printf("%d is neither a prime nor a Fibonacci number\n", n);
    }
    return 0;
}
