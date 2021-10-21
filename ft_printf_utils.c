/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:01:18 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/10/21 19:27:38 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_intlen(int n, int base);
static char	*ft_strint(char *str, unsigned int len, long n, int base);


char	*ft_itoa_base(long num, int base)
{
	unsigned int	len;
	char			*str;

	if (num == 0)
		return (ft_strdup("0"));
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(num, base);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (ft_strint(str, len, num, base));
}

static size_t	ft_intlen(int n, int base)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n = n / base;
	}
	return (i);
}

static char	*ft_strint(char *str, unsigned int len, long n, int base)
{
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[len] = '\0';
	len = len - 1;
	while (n)
	{
		if(n >= 10)
			str[len] = (n % base) + 97;//(n - 10)?;
		else
			str[len] = (n % base) + 48;
		n = n / base;
		len--;
	}
	return (str);
}

char	*ft_strchr(const char *string, int c)
{
	if (*string == (char)c)
		return ((char *)string);
	else if (!*string)
		return (NULL);
	else
		return (ft_strchr(++string, c));
}

int	ft_putstr(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}
