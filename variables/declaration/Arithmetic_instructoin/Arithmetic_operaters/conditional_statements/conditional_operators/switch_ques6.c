#include <stdio.h>

   int main() {
    int choice;
    printf("1.red\n");
    printf("2.yellow\n");
    printf("3.green\n");

    printf("enter the choice");
     scanf("%d",&choice);

     switch (choice)
     {
     case 1:
        printf("red\n");
        break;
     case 2:
        printf("yellow\n");
        break;
     case 3:
        printf("green\n");
        break;
     
     default:
          printf("invilde choice");
        break;
     }
     return 0;

   }