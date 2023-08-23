#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    char str[301];
    char target;
 
    scanf(" %[^\n]", &str);
    scanf(" %c", &target);
 
    int ind[300];
 
    int count = 0;
    int i;
    int length = strlen(str);
 
    for (i = 0; i < length; i++)
    {
        if (tolower(str[i]) == target)
        {
            ind[count] = i;
            count++;
        }
    }
 
    if (count == 0)
    {
        printf("Not found.");
    }
    else
    {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, target);
        printf("Position: ");
 
        for (i = 0; i < count - 1; i++)
        {
            printf("%d, ", ind[i]+1);
        }
        printf("%d", ind[count - 1]+1);
    }
}