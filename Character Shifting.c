#include <stdio.h>
  
int main(){
    char a,b,c,d,e;
     
    scanf("%c %c %c %c %c", &a, &b, &c, &d, &e);
    char A = 1+(int) a;
    char C = 1+(int) c;
    char E = 1+(int) e;
    printf("%c\n%c\n%c\n%c\n%c", A, b, C, d, E);
     
     
 
    return 0;
     
}