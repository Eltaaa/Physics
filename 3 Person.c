#include <stdio.h>
 
int main(){
    char fname1[100];
    char sname1[100];
    char person2[100];
    char person3[100];
 
     
    scanf("%s", &fname1);
    scanf(" %s", &sname1);
    scanf(" %[^\n]", &person2);
    scanf(" %[^\n]", &person3);
 
    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s\n", person3);
     
     
    return 0;
}