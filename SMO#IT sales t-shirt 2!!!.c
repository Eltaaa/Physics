#include<stdio.h>
#include<ctype.h>
 
int main(){
    double price, percent;
    int amount;
    scanf("%lf %lf %d", &price, &percent, &amount);
 
    // buy2get1
    float inpackprice;
    inpackprice = amount*(2.0/3.0) * price;
    inpackprice += (amount%3) * price;
 
    // discount
    double promo = (1-(percent/100.0)) * price * amount;
 
    if (inpackprice<promo){
        printf("Buy 2 Get 1\n");
        printf("%.2lf", inpackprice);
    }else {
        printf("Discount %.0lf%%\n", percent);
        printf("%.2lf", promo);
    }
 
    return 0;
 
 
}