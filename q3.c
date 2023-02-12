#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    num >>= 1;
    printf("After right shift: %d\n", num);

    num <<= 1;
    printf("After left shift: %d\n", num);

    return 0;
}