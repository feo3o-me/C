#include <stdio.h>

// Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
//  of blanks to space to the next tab stop.

void main()
{
	int contador = 0;
	char input;
	while ((input = getchar()) != EOF) // Ler Input
	{
		if (input == '\t')
		{
			
		}
		else
		{	
			contador++;
			putchar(input);
		}
	}
}
