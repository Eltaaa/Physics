#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
 
int main()
{
    char string[101];
    char behinddupe[101];
     
    scanf(" %[^\n]", &string);
 
    int adjust = 0;
 
    int index = 0;
 
    while (1){
         
        // printf("%c%c\n", string[index], string[index + 1]);
 
 
        if (string[index+1] == '\0' && !adjust){
            break;
        }
 
 
        if (string[index+1] == '\0' && adjust){
            printf("%s\n", string);
            index = 0;
            adjust = 0;
 
            continue;
        }
 
         
 
 
        if (string[index] == string[index+1]) {
            strcpy(behinddupe, string + index + 2);
            string[index] = '\0';
            strcat(string, behinddupe);
 
             
 
             
            adjust = 1;
            continue;
        }
        index++;
    }
}