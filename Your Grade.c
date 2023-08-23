#include<stdio.h>
 
int main(){
    char grade;
     
    scanf("%c", &grade);
 
    if (((int) grade)>=97){
        grade-=32;
    }
     
    switch ((int) grade){
        case 65 : printf("Genius"); break;
        case 66 : printf("Good"); break;
        case 67 : printf("Try Harder"); break;
        case 68 : printf("Very Bad"); break;
        case 70 : printf("Fail"); break;
        default : printf("Invalid Input");
    }
     
    return 0;
}