#include "main.h"

void jack_bauer(void)
{
	int h = 0;
	int min = 0;
	int sec1 = 0;
	int sec2 = 0;

	while (h <= 2)
	{
		min = 0;
		while (min < 4)
		{
			sec1 = 0;
			while (sec1 < 6)
			{
				sec2 = 0;
				while (sec2 < 9)
				{
					sec2 = sec2 + 1;
					_putchar(h + '0');
					_putchar(min + '0');
					_putchar(':');
					_putchar(sec1 + '0');
					_putchar(sec2 + '0');
					_putchar('\n');
				}
				sec1 = sec1 + 1;	
			}
			min = min + 1;
		}
		h = h + 1;
	}
}
