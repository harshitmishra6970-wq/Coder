#include <stdio.h>
      
void square(int n) {
    printf("square = %d", n * n);  //function definition
}

int main() {
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    square(n);             //function call
    return 0;
}