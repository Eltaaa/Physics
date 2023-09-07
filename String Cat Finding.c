#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[2001];
    scanf(" %[^\n]", &str);
 
    int ind[668];
    int catfounded = 0;
 
    for (int i = 0; i < strlen(str); i++)
    {
        if (tolower(str[i]) == 'c' && tolower(str[i + 1]) == 'a' && tolower(str[i + 2]) == 't')
        {
            // printf("%d ", i);
            ind[catfounded] = i;
            catfounded += 1;
        }
    }
 
    for (int i = 0; i < catfounded - 1; i++)
    {
        printf("%d, ", ind[i]);
    }
    if (catfounded != 0)
    {
        printf("%d", ind[catfounded - 1]);
    }
}