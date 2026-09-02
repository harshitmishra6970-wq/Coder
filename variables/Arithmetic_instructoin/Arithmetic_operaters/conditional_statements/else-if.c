#include <stdio.h>

 int main() {
    int age;
    printf("enter the age\n");
    scanf("%d", &age);

    if (age>=18) {
        printf("adult\n");
    }
      
     else if (age>13 && age<18) {
      printf("teenager\n");
      
     }
     else {
        printf("child\n");
     }
      printf("thank you\n");
     return 0;
     
    
 }