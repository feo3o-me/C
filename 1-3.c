#include <stdio.h>
// Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
// more blanks by a single blank.

void main()
{
	char input;
	int prev = 0; // Verifica se já houve algum espaço em branco anteriormente

	while ((input = getchar()) != EOF)
	{
		if (input == 32) // Se input == backspace
		{
			if (prev == 0) // Se não houver nenhum espaço anterior
			{
				prev = 1;
				putchar(input);
			}
			else if (prev == 1) // Se houver algum espaço anterior
			{
				prev = 0; // Reiniciar a contagem
				continue; // Ignorar o input e seguir com o programa
			}
		}
		else 
		{
			prev = 0; // Reinicia o contador a cada palavra para impedir que backspaces se acumulem sem necessidade
			putchar(input);
		}
	}
}