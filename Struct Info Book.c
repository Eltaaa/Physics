#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
 
int main()
{
    struct student_info
    {
        char name[61];
        char surname[61];
        char gender[7];
        int age;
        char id[13];
        double gpa;
    };
 
    struct student_info st1;
 
    scanf("%s %s %s %d %s %lf", &st1.name, &st1.surname, &st1.gender, &st1.age, &st1.id, &st1.gpa);
 
    if (!strcmp(st1.gender, "Female")){
        printf("Miss ");
    }else{
        printf("Mr ");
    }
 
    printf("%c %s (%d) ID: %s GPA %.2lf", st1.name[0], st1.surname, st1.age, st1.id, st1.gpa);
 
    return 0;
}