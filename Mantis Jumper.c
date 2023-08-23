#include <stdio.h>
#include <math.h>
 
int fibo(int x);

int main() {
    // sample cases has 8 and 13;
    // sussy fibo number perhaps ?
    int n;
    scanf("%d", &n);
    printf("method = %d", fibo(n));
}
 
int fibo(int x){
    // 1 1 2 3 5 8 13 21
    if (x==0){
        return 1;
    }
    else if (x==1){
        return 1;
    }
    else {
        return fibo(x - 1) + fibo(x - 2);
    }
}