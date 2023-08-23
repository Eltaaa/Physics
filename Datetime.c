#include <stdio.h>
#include <math.h>
 
int main()
{
    int second;
    scanf("%d", &second);
    printf("%d s = ", second);
 
    int day, hour, min;
 
    day = second / 86400;
    second = second % 86400;
 
    hour = second / 3600;
    second = second % 3600;
 
    min = second / 60;
    second = second % 60;
 
    printf("%d d %d h %d m %d s", day, hour, min, second);
    return 0;
}