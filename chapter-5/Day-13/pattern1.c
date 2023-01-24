/*
*
**
***
****
*****
*/

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) { // row
        for (j = 1; j <= i; j++) { // column
            printf("*");
        }
        printf("\n");
    }

    // printf("*\n");
    // printf("**\n");
    // printf("***\n");
    // printf("****\n");
    // printf("*****\n");

return 0;
}