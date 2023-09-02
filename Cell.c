#include <stdio.h>
#include <math.h>
 
int main()
{
    char dog[4];
 
    scanf("%s", &dog);
 
    printf("*****\n");
    printf("*-*-*\n");
    printf("*%s*\n", dog);
    printf("*-*-*\n");
    printf("*****\n");
    return 0;
}