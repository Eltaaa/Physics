#include <stdio.h>
  
int main(){
    char a[6];
    scanf(" %c", &a[0]);
    scanf(" %c", &a[1]);
    scanf(" %c", &a[2]);
    scanf(" %c", &a[3]);
    scanf(" %c", &a[4]);
    // printf("===\n");
    printf("%c", a[2]);
    printf("%c", a[3]);
    printf("%c", a[4]);
    printf("%c", a[0]);
    printf("%c", a[1]);
     
    return 0;
     
}