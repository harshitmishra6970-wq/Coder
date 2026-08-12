#include <stdio.h>

  int main() {
    char grade;

    printf("enter the grade:");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("excellent");
        break;
     case 'B':
        printf("very good");
        break;
     case 'C':  
        printf("good");
        break;
     case 'D':
        printf("practice");
        break;
     case 'F':
         printf("fail");
         break;         
    
    default:
       printf("invaild grade");
        break;
    }
    return 0;

  }