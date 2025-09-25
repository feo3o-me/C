/*
Encontrar e retornar o index da letra que se deseja encontrar em uma string (a primeira aparição)
*/

#include <stdio.h>
#define MAX 100

int read_input(char string[], int max);
void return_index(char string[], int lenght);

void main(){
    char string[MAX + 1];
    int len = read_input(string, MAX);
    for (int i = 0; i != '\0'; i++){
        printf("%s", string[i]);
    }
}

int read_input(char string[], int max){
    char input;
    int counter = 0;

    for (int i = 0; i < MAX && (input = getchar()) != EOF && input != '\n'; i++){
        string[i] = input;
        ++counter;
    }

    string[MAX + 1] = '\0';
    return counter;
}

void return_index(char string[], int lenght){

}

