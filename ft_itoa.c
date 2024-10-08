#include "libft.h"

static int nblen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*str;

	len = nblen(n);
	str = malloc(len * sizeof(char));
	i = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		i++;
	}
	while (len > i)
	{
		len--;
		str[len] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
