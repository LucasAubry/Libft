/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:45:04 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/20 02:23:12 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

src = cordon bleu
size = 4
dest = cordo


size_t ft_strlcpy(char *dest, const chat *src, size_t size)
{
	int	i;
	int	taille;

	i = 0;
	taille = 0;
	if (!dest || !src || size = 0)
		return (0);
	while (dest[taille])
		taille++;
	while (src[i] != '\0' || i != size || i != taille)
	{
		i++;
		dest[i] = src[i];
	}
	dest[i +1] = '\0';
	return (dest)
}