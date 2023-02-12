#include <stdio.h>

int main() {
    int m;
    int n1 = 1, n2 = 1, n3;  
    int i = 2; 

    printf("Enter the number of Fibonacci numbers to calculate: ");
    scanf("%d", &m);

    printf("%d   %d   ", n1, n2);

    do {
        n3 = n1 + n2;
        printf(" %d  ", n3);
        n1 = n2;
        n2 = n3;
        i++;
    } while (i < m);

    return 0;
}
