//String mein first occurrence of a character find ?

#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i, found = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("First occurrence at index = %d", found);
    } else {
        printf("Character not found");
    }

    return 0;
}