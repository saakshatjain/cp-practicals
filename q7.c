#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b=0;
    while (a>0) {
        b+=a%10;
        a/=10;
    }
    printf ("%d",b);
    return 0;
}