#include <stdio.h>

double square(double x)
{
    double result = x * x;
    return result;
}

int main(){

    // return = return a value back to a calling function

    double x = square(3.14);
    printf("%lf", x);
    
    return 0;
}