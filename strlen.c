size_t ft_strlen(const char *str)
{
		int	i;

		i = 0;
		while (str[i])
			i++;
		return  ((size_t)i);
}