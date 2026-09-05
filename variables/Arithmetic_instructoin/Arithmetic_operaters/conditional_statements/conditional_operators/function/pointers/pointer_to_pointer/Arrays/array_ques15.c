#include <stdio.h>

  int main() {
    int arr[9];
    for (int  i = 0; i < 9; i++)
    {
        printf("enter the number:");
        scanf("%d",&arr[i]);
    }
    for (int  i = 0; i < 9; i++)
    {
        arr[i] = arr[i] * 110;
    }
    printf("new number:");

    for (int i = 0; i < 9; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}   
    
    
  