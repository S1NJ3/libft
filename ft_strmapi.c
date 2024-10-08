#include "libft.h"

char	*ft_strmapi(char const *s,char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s) + 1;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	while(s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

