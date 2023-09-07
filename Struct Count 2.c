#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
 
struct longtext{
    int characters;
    int words;
    int line;
};
 
int countchar(char string[451]){
    int characters = 0;
    for (int i = 0; i < strlen(string);i++){
        if (string[i] != ' '){
            characters += 1;
        }
    }
    return characters;
}
int countwords(char string[451]){
    int words = 1;
    for (int i = 0; i < strlen(string);i++){
        if (string[i] == ' '){
            words += 1;
        }
    }
    return words;
}
 
int main(){
 
    struct longtext counting;
    counting.characters = 0;
    counting.words = 0;
    counting.line = 0;
 
    char x[451];
 
    while(1){
        scanf(" %[^\n]", &x);
        if (strcmp(".", x) == 0){
            break;
        }
        counting.characters += countchar(x);
        counting.words += countwords(x);
        counting.line += 1;
    }
 
    printf("Char = %d, word = %d, line = %d", counting.characters, counting.words, counting.line);
}