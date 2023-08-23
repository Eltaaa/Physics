#include <stdio.h>
#include <math.h>
 
void swapcase(char txt[102]);
int getStringLength(char txt[102]);
int stringCompare(char a[102], char b[102]);
char toLower(char a);
 
int main() {
    char string_a[102];
    char string_b[102];
    scanf(" %[^\n]", &string_a);
    scanf(" %[^\n]", &string_b);
 
    printf("*** Results ***\n");
    swapcase(string_a);
    swapcase(string_b);
    printf("***************\n");
    if (stringCompare(string_a, string_b)){
        printf("Both strings are the same.");
    }else{
        printf("Both strings are not the same.");
    }
 
    return 0;
}
 
void swapcase(char txt[102]){
    int length = getStringLength(txt);
 
    for (int i = 0; i < length; i++){
        if (65 <= txt[i] && txt[i] <= 65+25){
            printf("%c", txt[i] + 32);
        }
        else if (97 <= txt[i] && txt[i] <= 97+25){
            printf("%c", txt[i] - 32);
        }
        else {
            printf("%c", txt[i]);
        }
    }
    printf("\n");
}
 
int getStringLength(char txt[102]){
    int length = 0;
 
    while (txt[length] != '\0'){
        length++;
    }
 
    return length;
}
 
int stringCompare(char a[102], char b[102]){
    int a_length = getStringLength(a);
    int b_length = getStringLength(b);
 
    int length;
    if (a_length != b_length){
        return 0;
    }
 
    if (a_length >= b_length){
        length = a_length;
    } else {
        length = b_length;
    }
 
    for (int i = 0; i < length; i++){
        if (toLower(a[i]) != toLower(b[i])){
            return 0;
        }
    }
 
    return 1;
}
 
char toLower(char a){
    if (65 <= a && a <= 65+25){
        a = a + 32;
    }
 
    return a;
}