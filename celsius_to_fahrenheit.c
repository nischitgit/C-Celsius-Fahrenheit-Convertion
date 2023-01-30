// Celsius to Fahrenheit
#include <stdio.h>

int
main ()
{
  float celsius;
  printf ("Celsius to Fahrenheit \n");
  printf ("Enter Celsius: ");
  scanf ("%f", &celsius);
  float fahrenheit = celsius * 9 / 5 + 32;
  printf ("Fahrenheit: %f", fahrenheit);
  return 0;
}
