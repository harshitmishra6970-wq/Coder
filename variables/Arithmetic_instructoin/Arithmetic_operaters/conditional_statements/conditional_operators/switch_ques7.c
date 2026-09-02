#include <stdio.h>

  int main() {
    int choice;

    printf("1.apple\n");
    printf("2.banana\n");
    printf("3.orange\n");
    printf("4.date\n");
    printf("5.pineapple\n");

    printf("enter the number:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("apple\n");
        break;
    case 2:
        printf("banana\n");
        break;
    case 3:
        printf("orange\n");
        break;
    case 4:
        printf("date\n");
        break;
    case 5:
        printf("pineapple\n");
        break;
    
    default:
        printf("invaild choice");
        break;
    }
     return 0;
  }