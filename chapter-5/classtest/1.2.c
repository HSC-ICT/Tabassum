// write a c program to solve the 1st question of class test

#include <stdio.h>

int main() {
    while(1){
        int pass;
        printf("Enter the password: ");
        scanf("%d", &pass);

        if(pass == 2003){
            printf("Login Successful\n");
            break;
        }else printf("Wrong Password\n");
    }
    
    return 0;
}