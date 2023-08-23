#include <stdio.h>
#include <stdbool.h>
 
int main()
{
    double a[3][3];
 
    int i, j;
 
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
 
    double num1, num2, num3;
    num1 = a[0][0];
    num2 = a[1][1];
    num3 = a[2][2];
 
    bool scalar = (num1 == num2 && num2 == num3 && num1 == num3);
 
    if (scalar)
    {
        for (i = 0; i <= 2; i++)
        {
            for (j = 0; j <= 2; j++)
            {
                if (i != j && a[i][j] != 0)
                {
                    scalar = false;
                }
            }
        }
    }
 
 
    if (scalar){
        printf("This is a scalar matrix");
        return 0;
    }
    printf("This is not a scalar matrix");
    return 0;
}