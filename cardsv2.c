// Nick Tollett
// cardsv2.c
// evaluates face values of cards, version 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	int count = 0;
	while (card_name[0] != 'X')
	{
		printf("Enter the card_name: ");
		scanf("%2s", card_name);
		int val = 0;
		switch(card_name[0])
		{
			case 'K':
			case 'Q':
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
				continue;
			default:
				val = atoi(card_name);
				if ((val < 1) || (val > 10))
				{
					puts("Please input a value that is between 1 and 10");
					continue;
				}
		}
		if ((val > 2) && (val < 7))
			count++;
		else if (val == 10)
			count--;
		printf("The current count: %i\n", count);
	}

	return 0;
}