// Write a program a character in small case and convert it to capital case

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character in small case: ");
    scanf("%c", &ch);

    ch = ch - 32;

    printf("The character in capital case is: %c\n", ch);

return 0;
}