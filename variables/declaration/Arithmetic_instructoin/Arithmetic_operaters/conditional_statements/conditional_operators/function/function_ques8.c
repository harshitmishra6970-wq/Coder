#include  <stdio.h>

  int greater(int a, int b) {     //void function value return nahi kar sakta( right int )
        if (a > b)
            return a;
        else
             return b;
  }       
    int main()  {
        int a, b;
        printf("enter a & b number:");
        scanf("%d %d", &a, &b);

        printf("greater = %d",greater(a, b));
        return 0;
    }  
  