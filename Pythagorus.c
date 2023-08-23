#include <stdio.h>
#include <math.h>
 
int main()
{
    double num1, num2;
    scanf("%lf %lf", &num1, &num2);
 
    double num3 = sqrt(pow(num1, 2) + pow(num2, 2));
 
    printf("%.2lf", num3);
}