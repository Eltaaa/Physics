#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
struct Weather
    {
        char outlook[9]; // outlook{overcast,sunny,rain}
        int temperature;
        int humidity;
        char wind; // wind{T,F}
    };
 
void playing_decision(struct Weather x);
 
int main()
{
    int days;
    scanf("%d", &days);
 
    struct Weather x;
 
    for (int i = 0; i < days; i++){
        scanf("%s %d %d %c", &x.outlook, &x.temperature, &x.humidity, &x.wind);
        playing_decision(x);
        printf("\n");
    }
}
     
 
void playing_decision(struct Weather x)
{
    if (strcmp(x.outlook, "overcast") == 0) {
        printf("yes");
        return;
    }
 
    if (strcmp(x.outlook, "rain") == 0){
        if (x.wind == 'F'){
            printf("yes");
        }else{
            printf("no");
        }
        return;
    }
 
    if (strcmp(x.outlook, "sunny") == 0){
        if (x.humidity > 77.5){
            printf("no");
        }else{
            printf("yes");
        }
        return;
    }
 
}