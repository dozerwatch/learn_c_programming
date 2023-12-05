#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit to Celsius\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3.1f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}