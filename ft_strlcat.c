/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:44:59 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/21 03:06:55 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	long unsigned int tdest;
	int	tsrc;
	long unsigned int i;

	i = 0;
	tdest = ft_strlen(dest);
	tsrc = ft_strlen(src);
	if (size == 0)
		return (tsrc);
	while (src[i] && tdest + i < (size -1))
	{
		dest[tdest + i] = src[i];
		i++;
	}
	if (i < size)
		dest[i + tdest] = '\0';
	if (tdest > size)
		return (tsrc + size);
	return (tsrc + tdest);
}