//question12. String ka first aur last character print ?.

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;

    // String ke last character tak jaana
    while (str[i] != '\0') {
        i++;
    }

    printf("First character = %c\n", str[0]);
    printf("Last character = %c\n", str[i - 1]);

    return 0;
}