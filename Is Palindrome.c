#include <stdio.h>
 
int main() {
    char str[101];
 
    scanf(" %[^\n]", &str);
 
    int length = 0;
    while (str[length] != '\0'){
        length++;
    }
 
    for (int i = 0; i < length; i++){
        if (str[i] != str[length-i-1]){
            printf("It is not Palindrome.");
            return 0;
        }
    }
 
    printf("It is Palindrome.");
    return 0;
}