#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int *p = arr;
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }
    return 0;
}
