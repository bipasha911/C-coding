#include <stdio.h>

int main() {
    float length, width, area, perimeter;
    
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    
    area = length * width;
    perimeter = 2 * (length + width);
    
    printf("Area = %.2f, Perimeter = %.2f\n", area, perimeter);
    return 0;
}
