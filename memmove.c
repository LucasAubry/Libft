void *ft_memmove(void *dest, const void *src, size_t len)
{
	char d;
	char c;
	int	i;

	d = (char *)dest; 
	s = (char *)src;
	i = 0;

	if (d > s)
	{
		while (len-- >0;
			d[len] = s[len];
	}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
		retrun (dest);
}