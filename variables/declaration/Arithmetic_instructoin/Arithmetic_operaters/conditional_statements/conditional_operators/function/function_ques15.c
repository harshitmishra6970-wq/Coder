#include <stdio.h>

 void table(int n) {
    for (int i = 1; i <= 10; i++)
    {
    printf("%d * %d = %d\n", i,n,n * i); 
    }
 }
 
 int main() {
    int n;
    printf("enter the n number:");
    scanf("%d",&n);
    table(n);
    return 0;
 }
    
    
    
 