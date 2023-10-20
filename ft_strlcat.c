/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:44:59 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/20 18:23:10 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

copier src dans dest 

pour ca faut calculer la taille de dest ce mtre
 a la fin du mot et incrementer 
pour print src dans dest 


#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	int tdest;
	int	tsrc;
	int i;

	i = 0;
	tdest = ft_strlen(dest)
	tsrc = ft_strlen(src)
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
		return (tsrc + size)
	return (tsrc + tdest);
}