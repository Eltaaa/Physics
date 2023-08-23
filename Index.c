#include <stdio.h>
#include <stdbool.h>
 
int main()
{
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
 
    int num = -99;
    while (!(1 <= num && num <= 20)){
        scanf("%d", &num);
    }
     
    int i;
    for (i = 0; i<=7;i++){
        if (M[i] == num){
            printf("%d is in M at index [%d]", num, i);
            return 0;
        }
    }
 
    for (i = 0; i<=6;i++){
        if (N[i] == num){
            printf("%d is in N at index [%d]", num, i);
            return 0;
        }
    }
 
    printf("%d is not in neither M nor N", num);
}