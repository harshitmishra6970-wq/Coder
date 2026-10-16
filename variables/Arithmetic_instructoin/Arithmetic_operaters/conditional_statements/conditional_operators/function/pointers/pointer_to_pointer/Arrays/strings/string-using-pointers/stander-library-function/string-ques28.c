//question28. Count the number of words in a string in C ?


#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' &&
            (i == 0 || str[i - 1] == ' ' ||
             str[i - 1] == '\n')) {
            count++;
        }
    }

    printf("Total words = %d\n", count);

    return 0;
}
