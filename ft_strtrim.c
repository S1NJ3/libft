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

static size_t	trimlen(char const *s1, char const *set)
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

static int	*trimmage(const char *s1, const char *set, int *Htable)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
            if (Htable[(int)set[i]] == 0)
                    Htable[(int)set[i]] = 2;
            i++;
	}
	i = 0;
	while (s1[i])
	{
		if (Htable[(int)s1[i]] == 0)
			Htable[(int)s1[i]] = 1;
		i++;
	}
	return (Htable);
}


char	*ft_strtrim(const char *s1, const char *set)
{
    size_t	i;
    char	*str;
    size_t	j;
    int		Htable[256] = {0};

    i = 0;
    j = 0;
    str = (char *)malloc(trimlen(s1, set) * sizeof(char));
    if (!str)
        return (NULL);
    trimmage(s1, set, Htable);
    while (s1[i])
    {
	    if (Htable[(int)s1[i]] == 1)
	    {
		    str[j] = s1[i];
		    j++;
	    }
	    i++;
    }
    return (str);
}
