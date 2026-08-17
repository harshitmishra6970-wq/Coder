#include <stdio.h>

void printnumber(int n) {
    for (int i=1; i <= n; i++)
        printf("%d\n",i);
}

  int main() {
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    printnumber(n);
    return 0;
  }