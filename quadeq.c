#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
