#include <stdio.h>

int main(){
    
    // memory = array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    double a = 'X';
    double b = 'Y';
    double c = 'Z';

    printf("%ld bytes\n", sizeof(a));
    printf("%ld bytes\n", sizeof(b));
    printf("%ld bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    printf("\n");
    return 0;
}