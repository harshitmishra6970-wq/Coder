#include <stdio.h>

  int multiplication(int a, int b) {
    return a * b;
  }

  int main() {
    int a,b;
    printf("enter the a & b number\n");
    scanf("%d %d", &a, &b);
    printf("multiplication = %d\n", a * b);
    printf("thank you\n");
    return 0;
  }