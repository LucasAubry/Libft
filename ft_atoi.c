/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:42:34 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/21 03:15:35 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	moins;
	int	result;

	i = 0;
	moins = 1;
	result	= 1;

	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			moins = -1;
	}
	while (str[i] <= '9' &&	str[i] >= '0')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= moins;
	return (result); 
}