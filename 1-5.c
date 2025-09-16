#include <stdio.h>

// Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
// write a program that reverses its input a line at a time

#define MAXLINE 100

char string[MAXLINE];
char reverse_string[MAXLINE];

void main()
{
	char input;
	
	for (int i = 0; i <= MAXLINE && (input = getchar()) != EOF && input != 10; i++) // Lê os inputs
	{
		string[i] = input; // Armazena cada CHAR do input no array string;
	}
	
	string[MAXLINE] = '\0';
	
	for (int i = 0; i < MAXLINE; i++) // Inverte a string e guarda em outra string
	{
		reverse_string[i] = string[MAXLINE - 1 - i];
	}
	
	reverse_string[MAXLINE] = '\0';
	
	for (int i = 0; i < MAXLINE; i++)
	{
		printf("%c", reverse_string[i]);
	}
}