#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int discriminant; 
    float root1, root2; 
    printf("Enter the coefficients of the equation ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("The roots of the equation are: %f and %f\n", root1, root2);
    }

    return 0;
}
