#include <stdio.h>

 void sum(int a,int b) {
    printf("sum = %d", a + b);
 } 

    int main() {
        int a,b;
        printf("enter two number:");
        scanf("%d%d", &a,&b);
        sum(a,b);
        return 0;
    }