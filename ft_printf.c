/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:34:07 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/11/10 17:27:31 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_parameter(char c, va_list arg);

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	if (!str)
		return (0);
	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%' && ft_strchr("cspudixX%", *(str + 1)))
		{
			str++;
			count += ft_check_parameter(*str, args);
		}
		else
		{
			write(1, str, 1);
			count++;
		}
		str++;
	}
	va_end(args);
	return (count);
}

int	ft_check_parameter(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_print_c(va_arg(arg, int));
	else if (c == 's')
		count = ft_print_s(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		count = ft_print_int(va_arg(arg, int));
	else if (c == 'u')
		count = ft_print_u(va_arg(arg, unsigned int));
	else if (c == 'p')
		count = ft_print_p(va_arg(arg, unsigned long));
	else if (c == 'x')
		count = ft_print_x(va_arg(arg, unsigned int));
	else if (c == 'X')
		count = ft_print_x_upper(va_arg(arg, unsigned int));
	else
	{
		count++;
		write(1, "%", 1);
	}
	return (count);
}
