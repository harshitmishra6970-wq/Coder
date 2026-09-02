#include <stdio.h>

int main() {
    int arr[5];
    int key, found = 0;

    // Array input
    printf("Enter 5 elements: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Search element
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Element not found");
    }

    return 0;
}