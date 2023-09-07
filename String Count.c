#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
 
void counttarget(){
    char target;
 
    scanf("%c", &target);
    target = tolower(target);
 
    char string[151];
    scanf(" %[^\n]", &string);
 
    int count = 0;
    for(int i=0; i<strlen(string); i++){
        if (target == tolower(string[i])){
            count++;
        }
    }
 
    printf("%d", count);
}
 
 
int main(){
    counttarget();
 
}