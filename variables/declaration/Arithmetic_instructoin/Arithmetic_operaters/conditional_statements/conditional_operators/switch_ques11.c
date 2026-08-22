#include <stdio.h>

int main() {
    int choice;

    printf("1.phone\n");
    printf("2.laptop\n");
    printf("3.tv\n");
    printf("4.macbook\n");

    printf("enter the choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("phone\n");
        break;
    case 2:
        printf("laptop\n");
        break;
    case 3:
        printf("tv\n");
        break;
    case 4:
        printf("macbook\n");
        break;
    
    default:
           printf("invailid number\n");
        break;
    }
        printf("thank you\n");
    return 0;
}