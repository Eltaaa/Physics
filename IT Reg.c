#include <stdio.h>
 
int main(){
    char name[31];
    char surname[31];
    int id;
    int dd, mm, yy;
    float gpa;
 
    scanf("%[^\n]", &name);
    scanf(" %[^\n]", &surname);
    scanf(" %d", &id);
    scanf(" %d/%d/%d", &dd, &mm, &yy);
    // scanf(" %[^\n]", &bday);
    scanf("%f", &gpa);
 
    // scanf("%s %s %s %s", &s1, &s2, &s3, &s4);
 
    printf("Fullname: %s %s\n", name, surname);
    printf("ID: %d\n", id);
    printf("DOB: %02d-%02d-%04d\n", dd, mm, yy);
    printf("GPA: %.2f\n", gpa);
    return 0;
}