#include <stdio.h>
 
int main()
{
    int d;
    d = 0;
    int s = 0;
    while (d != -9)
    {
        scanf("%i", &d);
        // printf("d:%d\n", d);
        s = s + d;
    }
    printf("%d", s+9);
    return 0;
}