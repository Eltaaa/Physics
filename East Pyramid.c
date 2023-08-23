#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    int size;
    scanf("%d", &size);
 
    int r, c;
 
    for (r = 0; r < size; r++)
    {
        for (c = -(size - 1); c <= size - 1; c++)
        {
            if (abs(c) <= r)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}