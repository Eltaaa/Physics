#include<stdio.h>
 
int main(){
    char a;
    scanf(" %c", &a);
 
    // printf("%d %d %d %d", 'A', 'Z', 'a', 'z');
 
    if(65<=a && a<=90){
        printf("%c", a+32);
        return 0;
    }else{
        if (97<=a && a<=122){
            printf("%c", a-32);
            return 0;
        }
    }
    printf("error");
    return 0;
     
    
}