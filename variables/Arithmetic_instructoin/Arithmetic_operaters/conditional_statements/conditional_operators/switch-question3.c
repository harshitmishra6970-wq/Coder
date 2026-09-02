#include <stdio.h>

   int main() {
    int choice;
    float balance = 5000,amount;
     
     printf("1. check balance\n");
     printf("2. deposit\n ");
     printf("3. withdraw\n");
     printf("4. exit\n");
     
     printf("enter the choice:");
     scanf("%d",&choice); 
     
     switch (choice)
     {
     case 1:
        printf("balance = %.2f",  balance);
        break;
      case 2:
      printf("enter deposit amount");
      scanf("%f", &amount);
      balance = balance + amount;
      printf("new balance = %.2f", balance);
        break;
      case 3:
      printf("enter windrow amount");
      scanf("%f", &amount);
      
      if (amount <= balance)
      {
        balance = balance - amount;
        printf("new balance = %.2f", balance);
      }
      else {
        printf("insufficient balance");
      }
       break;
      case 4:
      printf("thank you ");
      break;
     
     default:
      printf("invalid choice");
        break;
     }
     return 0;
   }