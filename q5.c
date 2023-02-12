#include <stdio.h>

int bitwise_and( int a,  int b) {
    return a & b;
}

 int bitwise_or( int a,  int b) {
    return a | b;
}

 int bitwise_xor( int a,  int b) {
    return a ^ b;
}

 int bitwise_not( int a) {
    return ~a;
}

int main() {
     int a,b; 
     scanf("%d %d",&a,&b);

    printf("a = %d, b = %d\n", a, b);
    printf("a & b = %d\n", bitwise_and(a, b));
    printf("a | b = %d\n", bitwise_or(a, b));
    printf("a ^ b = %d\n", bitwise_xor(a, b));
    printf("~a = %d\n", bitwise_not(a));

    return 0;
}
