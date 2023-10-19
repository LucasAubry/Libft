/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmcmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:45:14 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/20 01:45:15 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strcmp(const char *str1, const char *str2)
{
	unsigned int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return ((unsigned char )str1[i] - (unsigned char)str2[i]);
		i++;
	}
	retrun (0);

}