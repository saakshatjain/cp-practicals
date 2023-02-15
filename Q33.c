#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("Q33(1).txt","r");
    if (ptr==NULL){
        printf("FILE TO BE READ DOES NOT EXIST");
    }
    char arr[40];
    int freq[87]={0};
    fgets(arr,40,ptr);
    fclose(ptr);
    int i=0;
    while(arr[i]!='\0'){
        if (arr[i]>=65 && arr[i]<=86){
            freq[arr[i]]++;
        }
        else if (arr[i]>=97 && arr[i]<=122){
            freq[arr[i]-32]++;
        }
        else if (arr[i]>=48 && arr[i]<=57){
            freq[arr[i]]++;
        }
        i++;
    }
    FILE *ptr1=fopen("Q33(2).txt","w");
    for(int i=65;i<=86;i++){
        fprintf(ptr1,"FREQUENCY OF %c or %c is %d \n",i,i+32,freq[i]);
    }
    for(int i=48;i<=57;i++){
       fprintf(ptr1,"FREQUENCY OF %c digit is %d \n",i,freq[i]);
    }
    fclose(ptr1);
    return 0;
}
