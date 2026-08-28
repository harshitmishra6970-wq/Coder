#include <stdio.h>

     int main() {
        int arr[5];
        int i, sum = 0;
        float average;
          //input
        for (int i = 0; i < 5; i++)
        {
            printf("enter the number:");
            scanf("%d", &arr[i]);
        }
         //sum
         for ( i = 0; i < 5; i++)
         {
            sum = sum + arr[i];
         }
         //average
         average = (float)sum /5;

         printf("sum = %d\n", sum);
         printf("average = %.2f", average);

         return 0;
         
     }