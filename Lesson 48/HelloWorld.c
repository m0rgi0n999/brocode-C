#include <stdio.h>

int main(){

    FILE *pF = fopen("test.txt", "w");

    fprintf(pF, "Spongebob Squarepants\n");

    fclose(pF);

    printf("\n");
    return 0;
}