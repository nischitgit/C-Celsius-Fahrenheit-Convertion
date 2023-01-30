// Fahrenheit to Celsius
#include <stdio.h>

int
main () {
  // Variable
  float fahrenheit;
  // Instruction
  printf ("Fahrenheit to Celsius \n");
  printf ("Enter Fahrenheit: ");
  scanf ("%f", &fahrenheit);
  // Output
  float celius = (fahrenheit - 32) * 5 / 9;
  printf ("Celsius: %f", celius);
  return 0;
}
