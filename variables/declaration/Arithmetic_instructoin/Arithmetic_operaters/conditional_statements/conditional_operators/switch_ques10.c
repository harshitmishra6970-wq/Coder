#include <stdio.h>

  int main() {
    int choice;

    printf("1.school\n");
    printf("2.college\n");
    printf("3.univercity\n");

    printf("enter the choice");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("school\n");
        break; 
    case 2:
        printf("college\n");
        break;
    case 3:
        printf("univercity\n");
        break;
    
        default:
        printf("invialid choice");
        break;
    }
    return 0;
  }