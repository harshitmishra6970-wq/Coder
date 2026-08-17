#include <stdio.h>

void cube(int n) {
   printf("cube = %d", n * n * n);   
}

  int main() {
    int n;
    printf("renter the number:");
    scanf("%d", &n);
    cube(n);
    return 0;
  }