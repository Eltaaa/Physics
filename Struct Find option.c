#include <string.h>
#include <strings.h>
#include <ctype.h>
 
struct Student
{
    char name[61];
    char surname[61];
    char gender[7];
    int age;
    char id[13];
    double gpa;
};
 
void sortbyname(struct Student x[20]);
void sortbysurname(struct Student x[20]);
void sortbyid(struct Student x[20]);
void printStruct(struct Student x[20]);
 
int main()
{
 
    struct Student x[20];
 
    for (int i = 0; i < 20; i++)
    {
        scanf(" %s %s %s %d %s %lf", &x[i].name, &x[i].surname, &x[i].gender, &x[i].age, &x[i].id, &x[i].gpa);
    }
    char method[8];
    scanf(" %s", &method);
 
    if (strcasecmp(method, "name") == 0)
    {
        sortbyname(x);
    }
    else if (strcasecmp(method, "surname") == 0)
    {
        sortbysurname(x);
    }
    else
    {
        sortbyid(x);
    }
}
 
void sortbyname(struct Student x[20]) {
    int n = 20;
    struct Student temp;
 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcasecmp(x[j].name, x[j + 1].name) > 0) {
                // Swap the elements if they are in the wrong order
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    printStruct(x);
}
 
void sortbysurname(struct Student x[20]) {
    int n = 20;
    struct Student temp;
 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcasecmp(x[j].surname, x[j + 1].surname) > 0) {
                // Swap the elements if they are in the wrong order
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    printStruct(x);
}
 
void sortbyid(struct Student x[20]) {
    int n = 20;
    struct Student temp;
 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcasecmp(x[j].id, x[j + 1].id) > 0) {
                // Swap the elements if they are in the wrong order
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    printStruct(x);
}
 
void printStruct(struct Student x[20])
{
 
    // printf("======\n");
    for (int i = 0; i < 20; i++)
    {
        if (strcasecmp(x[i].gender, "Female"))
        {
            printf("Mr ");
        }
        else
        {
            printf("Miss ");
        }
 
        printf("%c ", x[i].name[0]);
        printf("%s ", x[i].surname);
 
        printf("(%d) ", x[i].age);
 
        printf("ID: %s ", x[i].id);
 
        printf("GPA %.2lf", x[i].gpa);
 
        printf("\n");
    }
}