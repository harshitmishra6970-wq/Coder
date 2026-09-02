#include <stdio.h>

  int main() {
    int a;
    int b;
           printf("enter the a\n");
           scanf("%d", &a);
           printf("enter the b\n");
           scanf("%d", &b);
    int *p = &a;
    int *q = &b;

  int  Multiplication = *p * *q;
       printf("multiplication = %d", Multiplication);

       return 0;
       
  }