#include <stdio.h>

    float fahrenheit(float c) {
        return (c * 9/5) + 32;
    }

       int main() {
        float c;

        printf("enter the c:");
        scanf("%f", &c);

        printf("F = %.2f", fahrenheit(c));
        return 0;
       }