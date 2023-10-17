void ft_memcpy(void *dest, const void *source, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		dest[j] = source[j];
		i++;
		j++;
	}
	return (dest);

}


pas moi 

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;

	s1 = (char *)dst;
	i = 0;
	while (i < n)
	{
		*(char *)s1 = *(char *)src;
		s1++;
		src++;
		i++;
	}
	return (dst);
}