#include<stdio.h>

#define TAB 8 // WIN10 TERMINAL DEFAULT TAB SPACE

void main() 
{
	int input, counter = 0, space = 0;
	while((input = getchar()) != EOF) 
	{
		if(input == '\t') 
		{
			space = (TAB - (counter % TAB));
			while(space > 0)
			{
				putchar('*');
				counter++;
				space--;
			}
		}
		else
		{
			putchar(input);
			++counter;
		}

		if(input == '\n')
		{
			counter = 0;
		}	
	}
}