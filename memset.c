void *ft_memset(void *ptr, int val, size_t cout);
{
	char block;
	int	i;

	block = (char *)ptr;
	i = 0;
	while (len)
	{
		block[i] = val;
		i++;
		len--;
	}
	retrun (block);
}