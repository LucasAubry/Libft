/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:43:56 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/20 02:23:47 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*s1 ; "==cordon==bleu=="
set ; ==
resultat ; "cordon==bleu"

s1 ; "hello"
set ; helo
resultat ; ""*/
char ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	int i;
	int j;
	char *str;

	start = 0;
	end = 0;
	i = 0;
	j = 0;
	while (s1[end] != '\0')
		end++;
	str = (char *)malloc(sizeof(char) * (end + 1))
	if (!str)
		return (NULL);
	while (set[j] != '\0')
	{
		while (s1[start] == set[j])
			start++;
		j++;
	}
	j = 0;
	while (set[j] != '\0')
	{
		while (s1[end] == set[j])
			end--;
		j++;
	}
	(char *)s1[end +1] = '\0'
	while (s1[start] != '\0')
	{
		str[i] = s1[start]
		s1[start]++;
		i++;
	}
	str[i +1] = '\0';
}
return (str);