#include <stdio.h>
#include <ctype.h>
 
int main()
{
    int d;
    scanf("%i", &d);
 
    int i;
 
    for (i = 1; i <= d; i++)
    {
        printf("%i ", i);
    }
    return 0;
}