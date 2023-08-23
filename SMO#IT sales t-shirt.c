#include <stdio.h>
#include <math.h>
 
int main()
{
    double price, percent;
    int amount;
 
    scanf("%lf %lf %d", &price, &percent, &amount);
 
    double after_discount = (100 - percent) / 100 * (amount * price);
    printf("%.2lf", after_discount);
 
    return 0;
}