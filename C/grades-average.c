// 02.04.2023 Grades average
# include <stdio.h>

void enter(int*);

int main() {
    // Attempt with pointers :c
    /*int grades[5];
    int *pgrades;
    pgrades = grades;
    enter(pgrades);*/

    int grades[5];
    int counter = 1;
    float sum = 0;

    printf("Hello, with this program you can enter 5 grades in \nto calculate the average :)\n\n");

    for (int i = 0; i <= 4; i++) {
        printf("Enter number %d: ", counter);
        counter++;
        scanf_s(" %d", grades+i); //need a pointer!
        sum += grades[i];
    }

    printf("\nAverage: %.2f\n", sum /(float)5);

}

void enter(int* p) {
    for (p; *p != '\0'; p++) {
        printf("Enter grade: ");
        scanf_s(" %d", p);
    }
    *p = '\0';
}
