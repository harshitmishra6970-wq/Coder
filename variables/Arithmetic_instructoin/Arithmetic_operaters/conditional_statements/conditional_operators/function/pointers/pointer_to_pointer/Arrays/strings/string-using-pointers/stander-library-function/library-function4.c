#include <stdio.h>
#include <string.h>
void printstring(char arr[]);
int countlength(char arr[]);

int main() {
    char firststr[] = "Apple";
    char secstr[] = "Banana";
   // printf("%d", strcmp(firststr , secstr));  output -1
   printf("%d", strcmp(secstr , firststr));   //output +1
}
   int countlength(char arr[]) {
    int count = 0;
    for (int  i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    
   }