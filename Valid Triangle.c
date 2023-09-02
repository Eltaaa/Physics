#include <stdio.h>
#include <stdbool.h>
 
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
 
    bool con1 = a + b > c;
    bool con2 = a + c > b;
    bool con3 = b + c > a;
     
    if  (con1 && con2 && con3){
        printf("Triangle is valid.");
    }else{
        printf("Triangle is not valid.");
    }
 
    return 0;
}