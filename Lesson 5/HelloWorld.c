#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';                       // single character     %c
    char b[] = "Bro";                   // array of characaters %s

    float c = 3.141592;                 // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793;     // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool e = true;                    // 1 byte (true or false) %d

    char f = 100;                     // 1 byte (-128 - +127) %d or %c
    unsigned g = 255;                 // 1 byte (0 to +255) %d or %c

    short int h = 32767;              // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535;     // 2 bytes (0 to +65535) %d

    int j = 2147483647;                 // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295L;     // 4 bytes (0 to 4,294,967,295) %u

    long long int l = 9223372036854775807;                // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U;     // 8 bytes (0 to 18 quintillion) %llu

    printf("Variables!");
    printf("Single character: %c\n", a);    // char
    printf("Array of Characters: %s\n", b);    // character array
    printf("Float: %f\n", c);    // float
    printf("Double Float: %0.15lf\n", d);   // double
    printf("Boolean: %d\n", e);    // bool
    printf("Char as numeric: %d\n", f);    // char as numeric value
    printf("Char as character: %c\n", f);      // char as character value
    printf("Unsigned char as numeric: %d\n", g);    // unsigned char as numeric value
    printf("Unsigned char as character: %c\n", g);  // unsigned char as character value
    printf("Short intiger: %d\n", h);    // short
    printf("Unsigned short intiger: %d\n", i);    // unsigned short
    printf("Integer: %d\n", j);    // int
    printf("Unsigned intiger: %u\n", k);    // unsigned int
    printf("Long long integer: %lld\n", l);  // long long int
    printf("Unsigned long long integer: %llu\n", m);  // unsigned long long int


    return 0;
}