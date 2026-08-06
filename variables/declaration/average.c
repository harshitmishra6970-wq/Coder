#include <stdio.h>

    int main() {
        float a,b,c;
        printf("enter three number");
        scanf("%f%f%f", &a,&b,&c);
        printf("average = %.2f", (a + b + c)/3);

        return 0;
    }