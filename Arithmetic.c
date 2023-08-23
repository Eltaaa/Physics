#include <stdio.h>
#include <math.h>
 
int main()
{
    double num1, num2;
    scanf("%lf,%lf", &num1, &num2);
 
    double sum, dif, mul, div;
    sum = num1 + num2;
    dif = num1 - num2;
    mul = num1*num2;
    div = num1/num2;
 
    printf("The sum of the given numbers : %lf\n", sum);
    printf("The difference of the given numbers : %lf\n", dif);
    printf("The product of the given numbers : %lf\n", mul);
    printf("The quotient of the given numbers : %lf\n", div);
 
    return 0;
}