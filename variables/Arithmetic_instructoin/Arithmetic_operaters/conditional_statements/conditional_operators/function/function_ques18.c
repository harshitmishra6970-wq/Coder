#include <stdio.h>

 void fibnoacci(int n) 
 {
    int a = 0, b = 1, c;
    for (int  i = 1; i < n; i++)
     {
        printf("%d\n",a);
        c = a + b;
        a = b;
        b = c;
     }
       
 }
    int main()
    {
        int n;
        printf("enter the number of n:");
        scanf("%d", &n);
         
        fibnoacci(n);
        return 0;
    }