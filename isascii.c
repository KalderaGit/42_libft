#include<stdio.h>

int ft_ascii (char s)
{
		if(s >= '0' && s <= '127')
		{
			return 1;
		}
		else
		{
			return 0;
		}
}
