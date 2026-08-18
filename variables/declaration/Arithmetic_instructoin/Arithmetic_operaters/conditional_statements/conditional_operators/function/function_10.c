#include <stdio.h>

   int difference(int a,int b) {
        return a - b;
   }

   int main() {
    int a,b;
    printf("enter the a & b number");
    scanf("%d %d", &a,&b);

      printf("difference = %d\n", a - b);
      printf("thank you\n");
      return 0;
   }