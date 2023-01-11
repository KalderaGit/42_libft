char *memset(char *str, char a, int s)
{
	while(s != 0)
	{
		str[s] = a;
		s--;
	}
	return memset;
}
