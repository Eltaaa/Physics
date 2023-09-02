#include <stdio.h>
#include <math.h>
 
int main()
{
    float weight, height;
    scanf("%f %f", &height, &weight);
    height = height/100.0;
    // printf("%f %f", height, weight);
 
    float bmi = weight / (height*height);
 
    printf("%f", bmi);
     
    return 0;
}