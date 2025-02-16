#include <stdio.h>
#include <math.h>
int main () 
{
    float principal, rate, time, compoundInterest;
    
    printf("Enter principal amount, rate of interest, and time (years): ");
    scanf("%f %f %f", &principal, &rate, &time);
    
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    
    printf("Compound Interest = %.2f\n", compoundInterest);
    return 0;
}
