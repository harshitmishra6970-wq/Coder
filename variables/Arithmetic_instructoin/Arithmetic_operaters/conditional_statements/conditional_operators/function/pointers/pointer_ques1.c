#include <stdio.h>

  int  main() {
    int age = 22;
    int *p = &age;

    printf("age = %d\n", age);
    printf("addres = %p\n", p);
    printf("value = %d\n", *p);

    return 0;
  }