#include <stdio.h>
#include <ctype.h>
 
int main()
{
    int m, n;
    scanf("%i %i", &m, &n);
    int i;
 
    if (m<n){
        for (i=m; i<=n; i++){
            printf("%d ", i);
        }
    }else{
        for (i=m; i>=n; i--){
            printf("%d ", i);
        }
    }
}