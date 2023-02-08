// struct.cpp : practice questions on structures 08.02.2023
// website: https://www.codesdope.com/practice/c-structure/

#include <stdio.h>
#define MAX 20
#define MAX_grd 4
#define nl printf("\n")

typedef struct {
    int matr_no;
    char name[MAX];
    float grades[MAX_grd];
}students ;

int main()
{
    printf("Example programm: "); nl;
    students student01 = { 1, "Laura", {1.2, 1.2, 1.3, 1.5} };
    printf("Matriculation number: %d\nName: %s\n", student01.matr_no, student01.name);
    printf("Grades: ");
    for (int i = 0; i < MAX_grd; i++) {
        printf("%.2f ", student01.grades[i]);
    }

    // Several students
    /*
    students stud[2];
    printf("Enter students information: ");
    nl;
    for (int i = 0; i <= 1; i++) {
        printf("Enter the roll no.: ");
        scanf("%d", &stud[i].matr_no);
        printf("Enter the name: ");
        scanf("%s", stud[i].name);
        /*printf("Enter the age: ");
        scanf("%d", &stud[i].age);
        printf("Enter the grades average: ");
        scanf("%f", &stud[i].grades);
    }

    nl;
    printf("Printing details... "); nl; 

    for (int i = 0; i <= 1; i++) {
        printf("Roll no.: %d\n", stud[i].matr_no);
        printf("Name: %s\n", stud[i].name);
    }*/

    return 0;
}

