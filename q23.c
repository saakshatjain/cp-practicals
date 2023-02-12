#include<stdio.h>
int main() {
    int sum=0;
    printf("enter number of inputs\n");
    int a;
    int array[a];
    scanf("%d",&a);
    for (int i=0;i<a;++i) {
        printf("enter number\n");
        int b;
        scanf("%d",&b);
        array[i]=b;
        sum+=b;
    }
    printf("sum = %d\n",sum);
    int mean;
    mean = sum/a;
    printf("mean = %d\n",mean);

    int variance =0;
    for (int i=0;i<a;++i) {
        int k;
        k=array[i];
        variance+=(mean-k)*(mean-k);
    }
    int g=variance/a;
    printf("variance = %d\n",variance);

    return 0;
}
