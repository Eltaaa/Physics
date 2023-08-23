#include<stdio.h>
#include<ctype.h>
 
int main(){
    // isdigit return 2048 if true ??
    // islower return 512 
    // isupper return 256
    // huhhh!???
    char a;
    scanf(" %c", &a);
 
    if isdigit(a){
        printf("number");
    } else if islower(a){
        printf("lowercase");
    } else if isupper(a){
        printf("uppercase");
    }else{
        printf("error");
    }
    return 0;
}