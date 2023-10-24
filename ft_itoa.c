/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:43:19 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/24 23:56:09 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compteur(int n)
{
	int	o;

	o = 0;
	if (n <= 0)
		o++;
	while (n != 0)
	{
		n /= 10;
		o++;
	}
	return (o);
}

char	*ft_itoa(int n)
{
	int		i;
	int		nb;
	char	*dest;

	if (n <= -2147483648)
		return (ft_strdup ("-2147483648"));
	i = compteur(n) - 1;
	nb = n;
	dest = malloc(sizeof(char) * (compteur(n) + 1));
	if (!dest)
		return (NULL);
	if (nb < 0)
	{
		dest[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		dest[0] = '0';
	while (nb != 0)
	{
		dest[i] = (nb % 10) + '0';
		i--;
		nb /= 10;
	}
	dest[compteur(n)] = '\0';
	return (dest);
}
