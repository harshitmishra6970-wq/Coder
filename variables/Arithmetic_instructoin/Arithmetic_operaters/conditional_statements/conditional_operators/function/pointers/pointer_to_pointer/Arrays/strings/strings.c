//question1. create a string firstName & lastName to store details of user & print all the character using a loop?

 #include <stdio.h>
void printstring(char arr[]);
int main() {
   char firstName[] = "HARSHIT";
   char lastname[] =   "MISHRA";
     // fuction call
   printstring(firstName);
   printstring(lastname);
    return 0;
}
   void printstring(char arr[]) {
    for (int  i = 0; arr[i] !='\0'; i++)
    {
        printf("%c", arr[i]);
    }
     printf("\n");
   }