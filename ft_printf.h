/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:28:31 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/11/10 17:28:42 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define INT_MIN -2147483648
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_check_parameter(char c, va_list arg);
int		ft_putstr(const char *str);
char	*ft_strchr(const char *string, int c);
char	*ft_utoa_base(unsigned long long num, int base);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *string);
char	*ft_strdup(const char *src);
int		ft_print_c(int c);
int		ft_print_s(char *str);
int		ft_print_int(int decimal);
int		ft_print_u(unsigned int num);
int		ft_print_p(unsigned long pointer);
int		ft_print_x(unsigned int hex);
int		ft_print_x_upper(unsigned int hex_upper);

#endif