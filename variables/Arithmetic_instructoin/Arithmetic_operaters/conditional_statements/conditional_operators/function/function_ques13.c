#include <stdio.h>

  void reverse(int n) {
    for (int  i = n; i >= 1; i--)
    
    printf("%d\n", i);
  }
  
    int main() {
        int n;
        printf("enter the number n:");
        scanf("%d", &n);
        reverse(n);
        return 0;
    }
    
    
  