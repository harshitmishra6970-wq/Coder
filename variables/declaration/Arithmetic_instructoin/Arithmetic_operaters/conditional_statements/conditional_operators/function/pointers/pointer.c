#include <stdio.h>

int main() {
    int age = 22;
    int *p = &age;    //p-pointer
    int _age = *p;

    printf("%d", _age);

    return 0;
}