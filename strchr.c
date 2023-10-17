char ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i])
		i++;

	}
	return (NULL)
}