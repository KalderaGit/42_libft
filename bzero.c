char *ft_bzero(char *str, int s)
{
	while(s != 0)
	{
		str[s] = '/0';
		s--;
	}
	return ft_memset;
}
