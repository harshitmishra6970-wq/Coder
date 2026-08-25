#include <stdio.h>

  int main() {
    int marks[] = {97,98,89};

    printf("enter the phy marks:");
    scanf("%d", &marks[0]);
    printf("enter the che marks:");
    scanf("%d", &marks[1]);
    printf("enter the math marks:");
    scanf("%d", &marks[2]);

    printf("phy = %d, che = %d, math = %d", marks[0], marks[1], marks[2]);
    
    printf("\nthank you");
    return 0;
  }


  