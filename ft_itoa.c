/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:31:24 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/11/10 17:24:42 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*ft_strint(char *str, size_t len, int n);
static size_t	ft_intlen(int n);

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (ft_strint(str, len, n));
}

static size_t	ft_intlen(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*ft_strint(char *str, size_t len, int n)
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
		str[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (str);
}
