#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(){
    char string[151];
 
    scanf("%[^\n]", &string);
 
    // printf("%s", string);
 
    for(int i=0; i<strlen(string); i++){
        if (string[i] == ' '){
            continue;
        }
        printf("%c", string[i]);
    }
 
    return 0;
}