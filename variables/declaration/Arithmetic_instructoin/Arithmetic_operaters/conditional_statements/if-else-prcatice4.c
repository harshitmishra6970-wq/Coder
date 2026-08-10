#include <stdio.h>

 int main() {
    int n;
    printf("enter the number\n");
    scanf("%d", &n);

    if (n==0) {
        printf("number is zero\n");
    }
    else {
        printf("number is not zero\n");
    }
    return 0;
 }