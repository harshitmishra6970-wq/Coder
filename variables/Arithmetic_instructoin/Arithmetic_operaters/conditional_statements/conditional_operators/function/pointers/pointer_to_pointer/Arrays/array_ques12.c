#include <stdio.h>

  int main() {
    int arr[4];
    for (int  i = 0; i < 4; i++)
    {
        printf("enter the number:");
        scanf("%d", &arr[i]);
    }
        for (int i = 0; i < 4; i++) {
        arr[i] = arr[i] * 3;
    }
      printf("new number:\n");

      for (int  i = 0; i < 4; i++)
      {
        printf("%d\n", arr[i]);
      }
      return 0;
    
  }