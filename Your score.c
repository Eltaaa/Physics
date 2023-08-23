#include<stdio.h>
 
int main(){
    float a;
    scanf("%f", &a);
     
    if (80<=a && a<=100){
        printf("A");
    }else {
        if(70<=a&& a<80){
            printf("B");
        }else{
            if(60<=a&& a<70){
                printf("C");
            }else{
                if(50<=a&& a<60){
                    printf("D");
                }else{
                    if(0<=a&& a<50){
                        printf("F");
                    }else{
                        printf("Out of Range");
                    }
                }
            }
        }
    }
}