/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:44:53 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/23 15:13:40 by Laubry           ###   ########.fr       */
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
