
void memoire (int *s)
{
while (*s != '\0')
	(*s)++;
}

char *ft_stardup(const char *src)
{
	int i;
	int size;
	char *dest;

	i = 0;
	size = 0;


	memoire(&size)
	dest = (char *)malloc(size * sizeof(char));

	if (dest == NULL)
		retrun (NULL);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (*dest);
}
/*int main()
{
	const char *source = "j'aime les cordons bleu";
	char *duplicate = ft_stardup(source);

	if (duplicate != NUll)
	{
		printf("chaine dupliquee : %s\n", duplicate);
		free(duplicate);
	}
	return (0);
}
#include <stdio.h>
#include <stdlib.h>
*/