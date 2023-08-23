#include <stdio.h>
 
int main(){
    char s1[30];
    char s2[30];
    char s3[30];
    char s4[30];
 
    scanf("%[^\n]", &s1);
    scanf(" %[^\n]", &s2);
    scanf(" %[^\n]", &s3);
    scanf(" %[^\n]", &s4);
    // scanf("%s %s %s %s", &s1, &s2, &s3, &s4);
    printf("String 1: %.3s\n", s1);
    printf("String 2: %.4s\n", s2);
    printf("String 3: %.5s\n", s3);
    printf("String 4: %.6s\n", s4);
    return 0;
}