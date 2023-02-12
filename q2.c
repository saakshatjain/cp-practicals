#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    float b,c,d;
    b=2*3.14*a;
    c=3.14*a*a;
    d=1.33*3.14*a*a*a;
    printf("perimeter = %f\n",b);
    printf("area = %f\n",c);
    printf("volume = %f\n",d);

    return 0;
}