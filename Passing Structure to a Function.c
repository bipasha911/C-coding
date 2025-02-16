#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}

int main() {
    struct Complex c1, c2, sum;

    printf("Enter real and imaginary parts of complex number 1: ");
    scanf("%f %f", &c1.real, &c1.imaginary);

    printf("Enter real and imaginary parts of complex number 2: ");
    scanf("%f %f", &c2.real, &c2.imaginary);

    sum = addComplex(c1, c2);

    printf("\nSum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}