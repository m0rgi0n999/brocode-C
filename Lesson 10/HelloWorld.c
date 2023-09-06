#include <stdio.h>
#include <string.h> // getting rid of the newline character

int main(){

    char name[25]; //bytes
    int age;

    printf("\nWhat is your name? ");
    //scanf("%s", name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; // getting rid of the newline character

    printf("\nHow old are you? ");
    scanf("%d", &age);
    
    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old\n", age);

    return 0;
}