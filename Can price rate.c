#include <stdio.h>
#include <math.h>
 
int main()
{
    double price, dia, height;
    scanf("%lf %lf %lf", &price, &dia, &height);
 
    double volume = height * M_PI * pow(dia/2, 2);
     
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", price/volume);
}