//question19. String ka First aur Last Character Print Karna in C?

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    printf("First character: %c\n", str[0]);
    printf("Last character: %c\n", str[length - 1]);

    return 0;
}