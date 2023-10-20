/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:44:42 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/20 02:22:34 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int val, size_t cout);
{
	char block;
	int	i;

	block = (char *)ptr;
	i = 0;
	while (len)
	{
		block[i] = val;
		i++;
		len--;
	}
	retrun (block);
}