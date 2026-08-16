#include <stdio.h>

 int main() {
    int choice;

    printf("1.north\n");
    printf("2.east\n");
    printf("3.south\n");
    printf("4.west\n");

    printf("enter the number");   
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("north\n");
        break;
    case 2:
        printf("east\n");
         break;
    case 3:
           printf("south\n");
           break;
    case 4:
          printf("west\n");
          break;                
    default:
         printf("invalid choice\n");
        break;
    }
    printf("thank you\n");
    return 0;
 }