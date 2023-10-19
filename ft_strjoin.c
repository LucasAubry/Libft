ft_strjoin (char *s1, char *s2)
{	
	int i;
	int j;
	char *dest;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	dest = (char *)(malloc(sizeof(s1) * sizeof(s2));
	if (!dest)
		return (NULL);
	return (dest);
}