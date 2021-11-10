/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_base10.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:01:10 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/11/10 17:28:18 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int num)
{
	int		count;
	char	*str;

	str = ft_utoa_base(num, 10);
	count = ft_putstr(str);
	free(str);
	return (count);
}

int	ft_print_int(int decimal)
{
	int		count;
	char	*str;

	str = ft_itoa(decimal);
	count = ft_putstr(str);
	free(str);
	return (count);
}
