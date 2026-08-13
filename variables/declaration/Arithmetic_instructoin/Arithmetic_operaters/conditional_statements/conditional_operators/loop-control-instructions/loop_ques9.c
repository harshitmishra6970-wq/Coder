#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a number to countdown from: ");
    scanf("%d", &n);
    
    printf("Countdown:\n");
    for (int i = n; i >= 0; i--) {
        printf("%d\n", i);
    }
    
    printf("Blastoff!\n");
    
    return 0;
}
