/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:42:48 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/20 02:21:51 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_bzero(void *str, int n)
{
		int	i;
		int	nprim;

		i = 0;
		nprim = n;
	while (nprim != 0;)
	{
		str[i] = 0;
		i++;
		nprim = n -1;
	}
}
/* void	ft_bzero(void *s, size_t n)
{
	char		*i;

	i = s;
	while (n)
	{
		*i = 0;
		i++;
		n--;
	}
}
*/