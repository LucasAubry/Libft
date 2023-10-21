/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:45:21 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/21 13:22:34 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int i;
	int o;
	char *dest;

	i = 0;
	o = 0;
	if (s1[0] == '\0')
		return (s1);
	while (s1[i] != '\0' || i < len)
	{
		while (s1[i] == s2[o])
		{
			i++;
			o++;
			if (s1[i] == '\0' && s2[o] == '\0')
				return (dest);
		}
		o = 0;
		i++;
	}
	return (0);