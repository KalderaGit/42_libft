#include<stdio.h>

int ft_digit (char s)
{
		if(s >= '37' && s <= '127')
		{
			return 1;
		}
		else
		{
			return 0;
		}
}
