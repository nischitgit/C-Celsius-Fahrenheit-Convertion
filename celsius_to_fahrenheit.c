// Celsius to Fahrenheit
#include <stdio.h>

int
main () {
  // Variables
  float celsius, fahrenheit;
  // Instruction
  printf ("Celsius to Fahrenheit \n");
  printf ("Enter Celsius: ");
  scanf ("%f", &celsius);
  // Output
  fahrenheit = celsius * 9 / 5 + 32;
  printf ("Fahrenheit = %f", fahrenheit);
  return 0;
}
