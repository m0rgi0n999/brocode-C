#include <stdio.h>

int main(){
    
    FILE *pF = fopen("poem.txt", "r");
    //FILE *pF = fopen("poem.html", "r");
    char buffer[255];

    if(pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while(fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }

    printf("\n");
    return 0;
}