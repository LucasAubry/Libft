/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:44:04 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/20 02:23:51 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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