#include<stdio.h>
int factorial(int n) {
    int a=1;
    for (int i=1;i<=n;++i) {
        a*=i;
    }
    return a;
}
int main() {
    float x;
    scanf("%f",&x);
    float sinx;
    sinx = x - (x*x*x)/factorial(3) + (x*x*x*x*x)/factorial(5);
    printf("%f",sinx);
    return 0;
}