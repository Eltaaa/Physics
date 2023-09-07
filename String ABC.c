#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
  
int main()
{
    char name[201];
    scanf(" %[^\n]", &name);
  
    for (int i = 0; i<=127; i++){
        for (int j = 0; j < strlen(name); j++){
            if (name[j] == i){
                printf("%c", name[j]);
            }
        }
    }
  
     
}