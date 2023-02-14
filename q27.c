#include<stdio.h>
void compare(int arr1[],int arr2[],int n) {
    int k=0;
    for (int i=0;i<n;++i) {
        if (arr1[i]==arr2[i]) {
            continue;

        }
        else {
            k+=1;
        }
    if (k==0) {
        printf("1");
    }    
    else {
        printf("0");
    }
    }
}
int main() {
    int a;
    printf("enter no. of elemets in both array");
    scanf("%d",&a);
    int arr1[a];
    int arr2[a];
    for (int i=0;i<a;++i) {
        printf("enter %d elemts of 1st array",i+1);
        scanf("%d",&arr1[i]);
        printf("enter %d elemts of 2nd array",i+1);
        scanf("%d",&arr2[i]);
    compare(arr1,arr2,a);

    }
}
