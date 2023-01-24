// I wanted a program that will act differently on numbers and characters. Like, if I input -12, it will say 'Invalid Number!' & If Input 'Njhtg' it will say ' This is not a number. Try again!' using c programming

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
  char input[100];
  printf("Enter a number or a string: ");
  scanf("%s", input);

  int i;
  for (i = 0; input[i] != '\0'; i++) {
    if (!isdigit(input[i])) {
      printf("This is not a number. Try again!\n");
      exit(0);
    }
  }

  int num = atoi(input);
  if (num < 0) {
    printf("Invalid number!\n");
  } else {
    printf("Valid number!\n");
  }

  return 0;
}

/*
This program first reads in a string using scanf. It then iterates through each character of the string and checks if it is a digit using the isdigit function from the ctype.h library. If any character is not a digit, it prints an error message and exits the program. If all the characters are digits, it converts the string to an integer using the atoi function and checks if the number is negative. If it is, it prints an error message. Otherwise, it prints a success message.
*/