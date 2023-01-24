#include <stdio.h>

int main(){
    char grade;
    printf("Enter your marks: ");
    scanf("%c", &grade);

    if(grade >= 48 && grade <= 57){
        int marks = grade - '0';
        if(marks >= 0 && marks <= 100){
            if(marks >= 80 && marks <= 100){
                printf("Your grade is A+\n");
            }else if(marks >= 70 && marks <= 79){
                printf("Your grade is A\n");
            }else if(marks >= 60 && marks <= 69){
                printf("Your grade is A-\n");
            }else if(marks >= 50 && marks <= 59){
                printf("Your grade is B\n");
            }else if(marks >= 40 && marks <= 49){
                printf("Your grade is C\n");
            }else if(marks >= 33 && marks <= 39){
                printf("Your grade is D\n");
            }else{
                printf("Your grade is F\n");
            }
        }
    }else{
        printf("Invalid mark - must be between 0 and 100\n");
    }

    return 0;
}