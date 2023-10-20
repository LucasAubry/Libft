/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:44:53 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/20 02:22:52 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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