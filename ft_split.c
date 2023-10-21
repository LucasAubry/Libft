/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:43:36 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/21 02:56:37 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

LE CODE FAIS PLUS DE 25 LIGNE DANS LA FONCTION



/* *s = quoi--cou--beh
	c = -
	*/
#include "libft.h"

char **ft_split(char const *s, char c)
{
int	a;
int i;
int j;
int capture;
int taille_du_mots;
char **str;

a = 0;
i = -1;
taille_du_mots = 0;
capture = 0;
while (s[a] != '\0')
{
j = 0;
	if (s[a] == c)
	{
		str[++i] = malloc(sizeof(char) * taille_du_mots);
		if (!str)
			return (NULL);
		while (s[capture] != s[a] -1)
		{
			str[i][j] = s[capture];
			capture++;
			j++;
		}
		while (s[a] == c)
		{
			a++;
			capture++;
		}
		str[i][j] = '\0';
		taille_du_mots = 0;
	}
	a++;
	taille_du_mots++;
}
str[i] = NULL;
return (str);
}