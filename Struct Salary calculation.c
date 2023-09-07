#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};
 
int main()
{
    int n;
    scanf("%d", &n);
 
    struct Record employee[n];
    for (int i = 0; i < n; i++){
        scanf(" %s %s %ld %ld", &employee[i].id, &employee[i].name, &employee[i].salary, &employee[i].sales);
    }
 
    char targetid[10];
    scanf(" %s", &targetid);
 
     
    for (int i = 0; i < n; i++){
        if (strcmp(targetid, employee[i].id) == 0){
            printf("%s\n", employee[i].id);
            printf("%s\n", employee[i].name);
            printf("%ld\n", employee[i].sales);
            printf("%.2lf\n", employee[i].sales*2.0/100.0);
            printf("%ld\n", employee[i].salary);
            printf("%.2lf\n", employee[i].salary + employee[i].sales*2/100.0);
             
            return 0;
        }
    }
 
    printf("ID not found !!!");
}