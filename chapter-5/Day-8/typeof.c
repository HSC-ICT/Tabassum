#include <stdio.h>      
int main() {
    int a;
    float b;
    double c;
    char d;

    printf("size of int = %d bytes\n", sizeof(a));
    printf("size of float = %d bytes\n", sizeof(b));
    printf("size of double = %d bytes\n", sizeof(c));
    printf("size of char= %d bytes\n", sizeof(d));
    return 0;
}
/*
size of int = 4 bytes
size of float = 4 bytes
size of double = 8 bytes
size of char= 1 bytes
*/