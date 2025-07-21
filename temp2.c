#include <stdio.h>

int main() {

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");

    printf("C. Celsius to Fahrenheit \n");
    printf("F. Fahrenheit to Celsius \n");
    printf("Is the temperature in Celsius (C) or Fahrenheit? (F): ");
    scanf("%c", &choice);

    if(choice == 'C') {
        //C to F

        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);

            fahrenheit = (celsius * 9 / 5) + 32;

        printf("\n %.1f in Celcius is equal to %.1f Fahrenheit.\n", celsius, fahrenheit);

    } else if(choice == 'F') {
        //F to C

        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);

            celsius = 5 * (fahrenheit - 32) / 9;

        printf("\n %.1f in Fahrenheit is equal to %.1f Celcius.\n", fahrenheit, celsius);

    } else {

        printf("Invalid choice. Please enter 'C' or 'F'.\n");
    }

    return 0;
}