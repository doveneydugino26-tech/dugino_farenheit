#include <stdio.h>

int main() {
    float fahrenheit;
    float Celsius;

    // Ask user for the size of the square
    printf("Enter Fahrenheit value: ");
    scanf("%f", &fahrenheit);
    
    Celsius=(fahrenheit-32)*5/9;
    printf("Celsius: %.2f/n", Celsius);

    return 0;
}