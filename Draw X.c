#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p;
    int age;
    float height, weight;
    int line1=0, line2=0, line3=0, line4=0;
    int sum_age = 0;
    float sum_height = 0, sum_weight = 0;
    for (p = 0; p < 50; p++)
    {
        scanf(" %d %f %f", &age, &height, &weight);
        line1 += (age >= 20 && height >= 160);
        line2 += (age < 20 && (height <= 180 || weight >= 60));
        line3 += (age >= 30 && (weight >= 40 && weight <= 80));
        line4 += (age < 40 && (weight < 85 || height <= 200));
        sum_age += age;
        sum_height += height;
        sum_weight += weight;
    }
 
 
    printf("Age >= 20 and Height >= 160: %d\n", line1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", line2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", line3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", line4);
    printf("Average Age: %d\n", (sum_age / 50));
    printf("Average Height: %.2f\n", (sum_height / 50));
    printf("Average Weight: %.2f", (sum_weight / 50));
}