/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:35:50 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/27 08:36:01 by laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (lst-> next != NULL)
	{
		*lst = lst->next;
	}
	*lst->next = new;
}
*/
void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }

    t_list *current = *lst;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = new;
}
