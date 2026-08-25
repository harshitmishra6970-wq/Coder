#include <stdio.h>

int main() {
    
    int marks[4];
    
    printf("enter the marks ph:");
    scanf("%d", &marks[0]);
    printf("enter the marks che:");
    scanf("%d", &marks[1]);
    printf("enter the marks math:");
    scanf("%d", &marks[2]);
    printf("enter the marks eng:");
    scanf("%d", &marks[3]);

    printf("\nph = %d", marks[0]);
    printf("\nche = %d", marks[1]);
    printf("\nmath = %d", marks[2]);
    printf("\neng = %d", marks[3]);

    printf("\ntotal marks = %d", marks[0] +  marks[1] +  marks[2] +  marks[3] );

    return 0;
}