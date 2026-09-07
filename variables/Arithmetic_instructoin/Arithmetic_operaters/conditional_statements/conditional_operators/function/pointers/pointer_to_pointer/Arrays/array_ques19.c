//question19 .Array me smallest element find karo
#include <stdio.h>
int main() {
    int arr[6] = {25,45,32,555,44,22};
    int smallest = arr[0];
    for (int  i = 0; i < 6; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
     printf("smallest element = %d", smallest);
     return 0;
    

}