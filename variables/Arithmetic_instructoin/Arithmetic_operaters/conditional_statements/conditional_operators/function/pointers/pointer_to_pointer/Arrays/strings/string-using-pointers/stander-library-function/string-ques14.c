//question14. String mein kisi particular character ko search karna ?

#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to search: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character found at index %d\n", i);
            found = 1;
        }
    }

    if (found == 0) {
        printf("Character not found\n");
    }

    return 0;
}