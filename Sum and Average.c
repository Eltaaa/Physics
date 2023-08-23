#include <stdio.h>
 
int main()
{
    float num1, num2, num3, num4;
    float summation, avg;
     
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
 
    summation = num1 + num2 + num3 + num4;
    avg = summation/4;
 
    printf("Summation is %.2f\n", summation);
    printf("Average is %.3f", avg);
}