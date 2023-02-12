#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b;
    b=a;

    printf("%d\n",a);
    while (a>10) {
        printf("%d",a%10);
        a/=10;

    }
    printf("\n");
    while (b>100) {
        printf("%d",b%10);
        b/=10;
    }
    return 0;
}