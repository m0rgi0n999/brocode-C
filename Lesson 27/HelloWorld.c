#include <stdio.h>

int main(){

    // for loop = repeats a section of code a limited amount of times

    //for(int i = 1; i <= 10; i++)
    //for(int i = 1; i <= 10; i+=2)
    for(int i = 10; i >= 1; i-=3)
    {
        //printf("test\n");
        printf("%d\n", i);
        //printf("%d test\n", i);
    }

    return 0;
}