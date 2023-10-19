/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:42:34 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/20 01:42:40 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(char *str)
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

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", atoi("  -+--1234abc1243"));
	return 0;
}*/