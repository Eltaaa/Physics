#include <stdio.h>
#include <math.h>
 
double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);
 
 
int main() {
    double temp;
    char unit;
    scanf("%lf %c", &temp, &unit);
    if (unit == 'F' || unit == 'f'){
        printCelcius(fahrenheitToCelcius(temp));
    }
    if (unit == 'C' || unit == 'c'){
        printFarenheit(celsiusToFahrenheit(temp));
    }
}
 
double celsiusToFahrenheit(double celcius){
    // c/5 = f-32/9
    // f = c/5*9+32
 
    double f = celcius / 5 * 9 + 32;
    return f;
}
 
double fahrenheitToCelcius(double fahrenheit){
    // c/5 = f-32/9
    // c = f-32/9*5
    double c = (fahrenheit - 32) / 9 * 5;
    return c;
}
 
void printFarenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}
 
void printCelcius(double celcius){
    printf("%.2lf c", celcius);
}