/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrighi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 03:21:40 by jrighi            #+#    #+#             */
/*   Updated: 2024/10/04 05:26:30 by jrighi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	trimlen(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + 1;
	while (s1[i])
	{
		while (set[j])
        {
            if (s1[i] == set[j])
                len--;
            j++;
        }
        j = 0;
        i++;
    }
    return (len);
}

char    *ft_strtrim(const char *s1, const char *set)
{
    size_t  i;
    size_t  j;
    size_t  k;
    char    *str;
    int     found;

    str = (char *)malloc((trimlen(s1, set) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    k = 0;
    while (s1[i])
    {
        found = 0;
        j = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
                found = 1;
            j++;
        }
        if (!found)
        {
            str[k] = s1[i];
            k++;
        }
        i++;
    }
    str[k] = '\0';
    return (str);
}
