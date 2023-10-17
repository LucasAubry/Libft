int	strcmp(const char *str1, const char *str2)
{
	unsigned int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return ((unsigned char )str1[i] - (unsigned char)str2[i]);
		i++;
	}
	retrun (0);

}