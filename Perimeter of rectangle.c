#include <stdio.h>
#include <math.h>
 
int main()
{
    double num1, num2;
    scanf("%lf %lf", &num1, &num2);
 
    double peri = num1 * 2 + num2 * 2;
 
    printf("Perimeter of rectangle = %.4lf units", peri);
 
    return 0;
}