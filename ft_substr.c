char *ft_substr(char const *s, unsigned int start, size_t len)

/*Alloue (avec malloc(3)) et renvoie une sous-chaîne de la chaîne 's'. La sous-chaîne commence à l’index « start »
 et a une taille maximale « len ».*/

"j'aime les cordons bleu" 
strat 7
len 2
"le" ('le's cordons)



char *str;

str = s;


char chain [] = "une chaine";

*s "une chaine" >>> chain[]

start >>> le premier a copier 7 

len >>> longueur 2

char *str_allouer;

str_allouer = (char *)malloc(len * sizeof(char) + 1)

int i;
int j;

i = start;
j = 0;


[0] [1] [2]
while(i <= len)

7  8  9 10 

char *str

str = ft_substr(chain, 4, 7)



//////////////////////////////////////////////////////

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i; 
	char *str;

	if (start >= s)
		return (NULL);

	i = 0;
	str = (char *)malloc(len * sizeof(char) +1);
	if (!str)
		return (NULL);
	
	while (start <= len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	i = 0;
	str[i] = '\0';
	return (str);
}