#include <stdio.h>

  void cheak(int n) {
      if (n > 0)
      
        printf("positive\n");
     else if (n < 0)
     
        printf("negative\n");
     
     else 
        printf("zero\n");
     }

     int main() {
         int n;
         printf("enter the number:");
         scanf("%d", &n);
         cheak(n);
         return 0;
     
     }    
        
      
    