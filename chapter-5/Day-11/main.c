// write a program in c demonstrating the use of structure where a user can input student id, marks of five theory courses and marks of four lab courses for each of n students for a single semester and the program calculates and displays the students id and gpa of n students for a single semester.

#include <stdio.h>
#include <stdlib.h>

struct student{
    int id;
    int marks[5];
    int lab[4];
    float gpa;
};

int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    fflush(stdin);
    struct student s[n];
    for (int i = 0; i < n; i++){
        printf("Enter the id of student %d: ", i + 1);
        scanf("%d", &s[i].id);
        fflush(stdin);

        printf("Enter the marks of 5 theory courses: ");
        for (int j = 0; j < 5; j++){
            scanf("%d", &s[i].marks[j]);
            fflush(stdin);
        }

        printf("Enter the marks of 4 lab courses: ");
        for (int j = 0; j < 4; j++){
            scanf("%d", &s[i].lab[j]);
            fflush(stdin);
        }
    }
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < 5; j++) sum += s[i].marks[j];
        for (int j = 0; j < 4; j++) sum += s[i].lab[j];
        s[i].gpa = sum / 9.0;
    }
    for (int i = 0; i < n; i++) printf("The gpa of student %d is %f\n", s[i].id, s[i].gpa);
    return 0;
}