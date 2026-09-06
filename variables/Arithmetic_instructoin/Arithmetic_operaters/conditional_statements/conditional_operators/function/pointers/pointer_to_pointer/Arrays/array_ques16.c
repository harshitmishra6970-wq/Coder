#include <stdio.h>

  int main() {
    int arr[10];
    for (int  i = 0; i < 10; i++)
    {
        printf("enter the number:");
        scanf("%d", &arr[i]);
    }
    for (int  i = 0; i < 10; i++)
    {
        arr[i] = arr[i] * 1000;
    }
    printf("new number\n");
    for (int  i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("welcome to my friend nakul bhai:\n");
    printf("thank you:");
    
    return 0;
    
    
  }