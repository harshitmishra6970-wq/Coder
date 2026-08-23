#include  <stdio.h>

  int main() {
    int a = 10;
    int *p = &a;
 
    printf("value = %d\n", *p);
    printf("address = %p\n", (void*)p);

    return 0;
  }