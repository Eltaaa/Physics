#include <stdio.h>
#include <math.h>
 
 
int main() {
    int theta_degree, u;
    double g = 9.81;
    scanf("%d %d", &theta_degree, &u);
    // printf("%.2lf", M_PI);
 
    double theta_rad = (theta_degree * M_PI) / 180;
    double sin_value = sin(theta_rad);
    double height;
 
    height = (u * u * sin_value * sin_value) / (2 * g);
    // printf("%lf", height);
 
    printf("theta (degree) : %d\n", theta_degree);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4lf", height);
}