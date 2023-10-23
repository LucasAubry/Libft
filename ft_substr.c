/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:44:30 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/23 16:09:06 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	memoire(int *s)
{
	while (*s != '\0')
		(*s)++;
}

char	*ft_stardup(const char *src)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = 0;
	memoire(&size);
	dest = (char *)malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
