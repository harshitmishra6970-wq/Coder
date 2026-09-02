#include <stdio.h>

   float division(float a , float b) {
      return a / b;
   }

      int main() {
        float a,b;
        printf("enter the a & b number:");
        scanf("%f %f", &a , &b);
        printf("division = %.2f\n", a / b);
        printf("thank you\n");
        return 0;

      }