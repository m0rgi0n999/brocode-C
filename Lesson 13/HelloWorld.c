#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double C;

    printf("\nEnter side A: ");
    scanf("%lf", &A);
    printf("Enter side B: ");
    scanf("%lf", &B);

    //Side C is sqrt((Apow2)+(Bpow2))
    C = sqrt(A*A + B*B);

    printf("Side C = %lf\n", C);

    return 0;
}