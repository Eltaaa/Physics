#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
 
int main()
{
    char name[201];
    scanf(" %[^\n]", &name);
    printf("%c.", name[0]);
 
    for (int i = 0; i < strlen(name); i++){
        if (name[i] == ' '){
            printf("%c.", name[i + 1]);
            return 0;
        }
    }
}