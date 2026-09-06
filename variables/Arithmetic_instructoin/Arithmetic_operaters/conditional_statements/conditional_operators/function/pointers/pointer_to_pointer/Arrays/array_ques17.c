//question 17. Find the largest element in an array

#include <stdio.h>
 int main() {
    int arr[5] = {1,2,13,42,41};
    int largest = arr[0];

    for (int  i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
     printf("largest element = %d", largest);
    return 0;
 }