// Compile-time error: Missing semicolon
// int x = 10 

// Link-time error: Function not defined
// int y = undefined_function();

// Logical error: Incorrect formula (should be (a+b)/2)
#include <stdio.h>
int main() {
  int a = 5, b = 10;
  float average = a + b / 2; // Incorrect, b/2 is calculated first
  printf("Average: %f\n", average); // Output will be 10.000000 not 7.500000
  return 0;
}