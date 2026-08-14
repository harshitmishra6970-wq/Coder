#include <stdio.h>

  int main () {
    int n;

    printf("1.summer\n");
    printf("2.winter\n");
    printf("3.rainy\n");
    printf("4.spring\n");

    printf("enter the number\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("summer");
        break;
    case 2:
        printf("winter");
        break;
     case 3:
        printf("rainy");
        break;
        case 4:
        printf("spring");
        break;
    
    default:
        printf("invaild number");
        break;
    }
    return 0;
  }