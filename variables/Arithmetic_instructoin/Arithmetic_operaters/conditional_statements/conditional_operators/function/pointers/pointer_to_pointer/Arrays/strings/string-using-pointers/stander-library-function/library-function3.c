#include <stdio.h>
#include <string.h>
void printstring(char arr[]);
int countlength(char arr[]);

int main() {
    char firststr[100] = "harshit";    // size [100]
    char secstring[] = "mishra";
    strcat(firststr , secstring);
    puts(firststr);
}