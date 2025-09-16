#include <stdio.h>

// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal;

char input;
int words[50];
int counter = 0;

void reset_array(int array[])
{
	for (int i = 0; i <= 20; i++) // Preenche o array com 0
	{
		words[i] = 0;
	}
}

void main()
{
	reset_array(words);
	
	while ((input = getchar()) != EOF) // Lê o input do corajoso que vai testar o programa
	{
		if (input == 10 || input == 13)
		{
			for (int i = 0; i <= counter - 1; i++)
			{
				words[i] = counter;
				printf("%d--", words[i]); // Printa o array com as posições preenchidas pelo tamanho da palavra
			}
			printf("\n");
			counter = 0;
		}
		else 
		{
			counter++; // Incrementa quantas palavras foram digitadas
		}
	}
}