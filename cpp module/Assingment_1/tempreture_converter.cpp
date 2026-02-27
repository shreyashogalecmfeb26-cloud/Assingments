/* Write a C program with the following two functions — declare prototypes before main(), dene them
after main():
float celsiusToFahrenheit(float c) — converts Celsius to Fahrenheit
(Formula: F = (C × 9/5) + 32)
float fahrenheitToCelsius(float f) — converts Fahrenheit to Celsius
(Formula: C = (F − 32) × 5/9)
In main(), call both functions with sample values and print the results formatted to 2 decimal places */

#include<stdio.h>

float  celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);


int main(){

    float celsius = 45.00;
     
    float fahrenhit = 96.00;

  float  converted_celsius = celsiusToFahrenheit(celsius);
  float  converted_fahrenhit = celsiusToFahrenheit(fahrenhit);

  printf("converted celsius from %f degree to fahrenhit is %f \n ",celsius,converted_celsius);
   printf("converted fahrenhit from %f to calsius is %f degree",fahrenhit, converted_fahrenhit);

    return 0;
}

float celsiusToFahrenheit(float c){

   int F = (c * (9/5) + 32);
   return F;

}

float fahrenheitToCelsius(float f){

    int  C = (f-32)*(5/9);

    return C;
}