#include <stdio.h>

  int main() {
    float a,b;
    char op;

      printf("enter two number:");
      scanf("%f%f", &a,&b);

      printf("enter operator(+,-,/,*):");
      scanf(" %c", &op);

      switch (op)
      {
      case '+' :
        printf("result = %.2f", a + b);
        break;
      case '-' :
       printf("result = %.2f", a-b);
       break;
      
       case '*' :
      printf("result = %.2f", a * b);
      break;
      if (b !=0)
      case '/' :
        printf("result = %.2f", a/b);
        else
        printf("cannot divide by zero");
        break;
      
      
      
      printf("result = %.2f", a/b);
      break;
        
      
      default:
      printf("invalid operator");
        
      }
      return 0;
  }