//question18.Array me smallest element find karo.
#include <stdio.h>
int main() {
    int arr[5] = {43,54,67,85,78};
   int  smallest = arr[0];

   for (int  i = 0; i < 5; i++)
   {
    if (arr[i] < smallest)
    {
        smallest = arr[i];
    }
      
    }
    printf("smallest element = %d", smallest);
   
   return 0;
   
}