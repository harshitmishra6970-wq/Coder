// question2. ask the user to enter their firstName & print it back to them . also try with their fullName?
#include <stdio.h>
void printstring(char arr[]);
int main() {
    //char firstName[50];
   // scanf("%s", firstName);
    //printf("your name is %s", firstName);
    char str[100];
    fgets(str, 100, stdin);
    puts(str);
    return 0;
}
  void printstring(char arr[]) {
   for (int  i = 0; arr[i] != '\0'; i++)
   {
    printf("%c", arr[i]);
   }
    printf("\n");
  }