//question5. Do strings compare karo?
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}