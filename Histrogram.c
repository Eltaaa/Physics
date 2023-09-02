#include <stdio.h>
 
int main() {
    int num;
    scanf("%d", &num);
     
    int charCounts[130] = {0};
    int countchar = 0;
    char alphabet[27];
 
    for (int i = 0; i < num; i++) {
        char c;
        scanf(" %c", &c);
        // using ascii as index
        if (c <= 90){
            c += 32;
        }
        if (charCounts[c] == 0) {
            alphabet[countchar] = c;
            // move index
            countchar++;
        }
         
        charCounts[c]++;
    }
 
    for (int i = 0; i < countchar; i++){
        printf("%c: ", alphabet[i]);
        printf("%d\n", charCounts[alphabet[i]]);
    }
 
    return 0;
}