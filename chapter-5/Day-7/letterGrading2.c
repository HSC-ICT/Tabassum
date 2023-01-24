#include <stdio.h>

int main(){
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if(mark < 0 || mark > 100) printf("Wrong Input\n");
    else if(mark >= 80 && mark <= 100) printf("Your grade is A+\n");
    else if(mark >= 70 && mark <= 79) printf("Your grade is A\n");
    else if(mark >= 60 && mark <= 69) printf("Your grade is A-\n");
    else if(mark >= 50 && mark <= 59) printf("Your grade is B\n");
    else if(mark >= 40 && mark <= 49) printf("Your grade is B-\n");
    else if(mark >= 33 && mark <= 39) printf("Your grade is C\n");
    else printf("Your grade is F\n");
}
