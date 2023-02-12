#include<stdio.h>
int main() {
    int a[10]={1,3,5,7,9,11,13,15,17,19};
    int b[10]={2,4,6,8,10,12,14,16,18,20};
    int c[20];
    int temp;
    for (int i=0;i<10;++i) {
        c[i]=a[i];
    }
    for (int i=0;i<10;++i) {
        c[10+i]=b[i];
    }
    for (int i=0;i<20;++i) {
        for (int j=0;j<20;++j) {
            if (c[i]<c[j]) {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for (int i=0;i<20;++i) {
        printf("%d  ",c[i]);

    }
    return 0;
}