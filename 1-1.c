#include <stdio.h>

// Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table
// Multiplicamos a temperatura em ºC por 1,8 e somamos 32 ao resultado

// Funções declaradas.
double conversion(double celsius, double fahr);
void print_table();

// Variáveis globais.
// Controle do loop
int start = 0;
int max = 300;
int step = 20;

void main()
{	
	double celsius = 0;
	double fahr = 0;
	
	conversion(celsius, fahr);
}

double conversion(double celsius, double fahr)
{

	for (celsius = 0; celsius <= max; celsius += step)
	{
		fahr = celsius * 1.8 + 32;
		print_table(celsius, fahr);
	}
}

void print_table(double celsius, double fahr)
{
	printf("%.2f\t%.2f\n", celsius, fahr);
}
