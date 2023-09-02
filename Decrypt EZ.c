#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
  
int main()
{
  
    char upper[] = {'Q', 'P', 'Y', 'X', 'B', 'A', 'I', 'W', 'G', 'Z', 'V', 'F', 'U', 'T', 'H', 'S', 'O', 'J', 'L', 'K', 'D', 'E', 'C', 'N', 'M', 'R', 'Q', 'P', 'Y', 'X', 'B', 'A', 'I', 'W', 'G', 'Z', 'V', 'F', 'U', 'T', 'H', 'S', 'O', 'J', 'L', 'K', 'D', 'E', 'C', 'N', 'M', 'R'};
  
    char lower[] = {'q', 'p', 'y', 'x', 'b', 'a', 'i', 'w', 'g', 'z', 'v', 'f', 'u', 't', 'h', 's', 'o', 'j', 'l', 'k', 'd', 'e', 'c', 'n', 'm', 'r', 'q', 'p', 'y', 'x', 'b', 'a', 'i', 'w', 'g', 'z', 'v', 'f', 'u', 't', 'h', 's', 'o', 'j', 'l', 'k', 'd', 'e', 'c', 'n', 'm', 'r'};
  
    char str[201];
    scanf(" %[^\n]", &str);
  
    int length = strlen(str);
  
    int i, j;
    for (i = 0; i < length; i++){
        if (islower(str[i])){
            for (j = 26; j <= 53; j++){
                if (str[i] == lower[j]){
                    printf("%c", lower[j - 5]);
                    break;
                }
            }
        }
        else if (isupper(str[i])){
            for (j = 26; j <= 53; j++){
                if (str[i] == upper[j]){
                    printf("%c", upper[j - 5]);
                    break;
                }
            }
        }
        else{
            printf("%c", str[i]);
        }
    }
}