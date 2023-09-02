#include<stdio.h>
 
int main(){
    double a, b, c;
     
    scanf("%lf %lf %lf", &a, &b, &c);
     
    if (a>b){
        double temp = a;
        a=b;
        b=temp; 
    }
 

 
    if (c < a && a < b ){
        printf("%.2lf", a);
        return 0;
    }
    // a < c < b
    if (a < c && c < b){
        printf("%.2f", c);
        return 0;
    }
 
    // a<b<c
    printf("%.2f", b);
 
    return 0;
}