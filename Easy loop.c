#include <stdio.h>
#include <ctype.h>
 
int main()
{
    int n;
    scanf("%d", &n);
 
    int i;
 
    if (n >=0){
        for (i=n; i>=0; i--){
            printf("%d ", i);
        }
    }
    else {
        for (i=n; i<=0; i++){
            printf("%d ", i);
        }
    }
     
}