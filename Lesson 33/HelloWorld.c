#include <stdio.h>

int main(){
    
    double prices[] = {5.0, 10.0, 45.0, 40.0};

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]);i++)
    {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}