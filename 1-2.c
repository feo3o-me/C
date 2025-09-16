#include <stdio.h>

// Exercise 1-8. Write a program to count blanks, tabs, and newlines.

void main()
{
	char input;
	int blanks = 0;
	int newlines = 0;
	int tabs = 0;
	
	while ((input = getchar()) != EOF)
	{
		switch (input)
		{
			case 32:
				blanks++;
				break;
			case '\n':
				newlines++;
				break;
			case '\t':
				tabs++;
				break;
		}
	}
	
	printf("Blanks: %d, Tabs: %d, Newlines: %d", blanks, tabs, newlines);
}