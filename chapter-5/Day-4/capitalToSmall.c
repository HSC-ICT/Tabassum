// Write a program a character in capital case and convert it to small case

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character in capital case: ");
    scanf("%c", &ch);

    ch = ch + 32;

    printf("The character in small case is: %c\n", ch);

return 0;
}