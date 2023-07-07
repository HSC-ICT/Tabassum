// write a c program to solve the 1st question of class test

#include <stdio.h>

int main() {
    int pass = 2003;

    for(;;){
        int in;
        printf("Enter the password: ");
        scanf("%d", &in);

        if(in == pass){
            printf("Login Successful\n");
            break;
        }else printf("Wrong Password\n");
    }
    
    return 0;
}