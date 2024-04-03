/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:43:07 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/11 14:18:11 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_c(va_list ap, int *count)
{
	int	c;

	c = va_arg(ap, int);
	write(1, &c, 1);
	*count += 1;
}

void	ft_print_percent(char c, int *count)
{
	c = 37;
	ft_putchar_fd(c, 1);
	*count += 1;
}

void	ft_print_s(va_list ap, int *count)
{
	char	*str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		*count += 6;
		return ;
	}
	ft_putstr_fd(str, 1);
	*count += ft_strlen(str);
}

void	ft_print_nb(va_list ap, char *base, int *count)
{
	int	nb;

	nb = va_arg(ap, int);
	ft_putnbr_base(nb, base, count);
	*count += ft_intlen(nb);
}

void	ft_print_x(va_list ap, char *base, int *count)
{
	int	nb;

	nb = va_arg(ap, int);
	ft_putnbr_basex(nb, base, count);
}
