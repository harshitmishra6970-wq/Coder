#include <stdio.h>
 
 int main() {
    float price[3];

    printf("enter the 3 price:");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("total price = %f", price[0] + (18 * price[0]));
    printf("total price = %f", price[1] + (18 * price[1]));
    printf("total price = %f", price[2] + (18 * price[2]));

    return 0;
 }
