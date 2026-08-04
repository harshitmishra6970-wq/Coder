#include <stdio.h>

int  main() {
    float obtained, total, percentage;
    printf("enter the obtained marks;");
    scanf("%f", &obtained);
    printf("enter the total marks:");
    scanf("%f", &total);

    percentage = obtained / total * 100;
    printf("percentage = %.2f%%",percentage);
    return 0;
}