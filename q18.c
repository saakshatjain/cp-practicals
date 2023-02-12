#include<stdio.h>
int main() {
    int a;
    char e;
    printf("enter no. of characters \n");
    scanf("%d",&a);
    printf("enter character to found\n");
    scanf("%c",&e);
    char b;
    int c=0;
    for (int i=0;i<a;++i) {
        scanf("%c",&b);
        if (b==e) {
            c+=1;
        }
    }
    printf("%d",c);
    return 0;
}