#include <stdio.h>

  int main() {
    int choice;
    float r,side,length,width;

    printf("1.circle\n");
    printf("2.square\n");
    printf("3.rectangle\n");

    printf("enter the nunber\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("enter the radius");
        scanf("%f", &r);
        printf("area = %.2f", 3.14 * r * r);
        break;
    case 2:
        printf("enter the side");
        scanf("%f", &side);
        printf("area = %.2f", side * side);
        break;
     case 3:
        printf("enter the length & width");
        scanf("%f%f",&length,&width);
        printf("area = %.2f",length * width);
        break;    
    
    default:
          printf("invalid number");
        break;
    }

      return 0;
  }