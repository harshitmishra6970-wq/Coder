#include <stdio.h>

 int main() {
    int arr[8];
    for (int  i = 0; i < 8; i++)
    {
        printf("enter the number:");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        arr[i] = arr[i] * 10;
    }
    printf("new number:");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", arr[i]);
    }
       printf("thank you\n");
    return 0;
 }
