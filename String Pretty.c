#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
 
int isodd(int x){
    return x%2;
}
 
 
 
int main(){
    int length;
    char txt1[51];
    char txt2[41];
 
 
    scanf(" %d", &length);
    scanf(" %[^\n]", &txt1);
    scanf(" %[^\n]", &txt2);
 
    for(int i=0; i<length; i++){
        printf("*");
    }
    printf("\n");
 
 
    printf("*");
    if (isodd(length - 2 - strlen(txt1))){
        for(int i=0; i<=ceil((length-2-strlen(txt1))/2);i++){
            printf(" ");
        }
 
        printf("%s", txt1);
 
        for(int i=0; i<floor((length-2-strlen(txt1))/2);i++){
            printf(" ");
        }
    } else{
        for(int i=0; i<((length-2-strlen(txt1))/2);i++){
            printf(" ");
        }
        printf("%s", txt1);
        for(int i=0; i<((length-2-strlen(txt1))/2);i++){
            printf(" ");
        }
    }
    printf("*");
    printf("\n");
 
    printf("*");
    if (isodd(length - 2 - strlen(txt2))){
        for(int i=0; i<=ceil((length-2-strlen(txt2))/2);i++){
            printf(" ");
        }
 
        printf("%s", txt2);
 
        for(int i=0; i<floor((length-2-strlen(txt2))/2);i++){
            printf(" ");
        }
    } else{
        for(int i=0; i<((length-2-strlen(txt2))/2);i++){
            printf(" ");
        }
        printf("%s", txt2);
        for(int i=0; i<((length-2-strlen(txt2))/2); i++){
            printf(" ");
        }
    }
    printf("*");
    printf("\n");
 
    for(int i=0; i<length; i++){
        printf("*");
    }
 
    return 0;
}