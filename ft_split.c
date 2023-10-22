/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:43:36 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/22 16:58:04 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

compt le nombre de mots

static int ft_compte(const char *s, char c)
{
    int i;
    int world;

    i = 0;
    world = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        while (s[i] != c && s[i] -1 == c && s[i] != '\0')
        {
            world++;
            i++;
        }
        while (s[i])
            i++;
    }
    return (world);
}

alloue de la memoire a la chaine pour chaque mots gros con


static char **ft_longeurs_mots(char **dest, const char *s, char c)
{
    int j;
    int i;
    int world;

    j = 0;
    i = 0;
    world = 0;
        while (s[i] != c)
        {
            world++;
            i++;
        }
        while (s[i] == c)
            i++;
    }
    dest[j][o] = malloc(sizeof(char)* world)
    if (!dest)
        return (NULL);
    return (dest);
}




    dest[j][o] = malloc(sizeof(char)* ft_compte(s, c));
















rempli le tableau dest avec les mots



char	**ft_split(char const *s, char c)
{
    
}


*/