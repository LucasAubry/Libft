/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:44:45 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/20 01:44:46 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i])
		i++;

	}
	return (NULL)
}