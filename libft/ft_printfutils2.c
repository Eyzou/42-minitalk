/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:46:55 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/07 16:58:11 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_un(va_list ap, char *base, int *count)
{
	unsigned long long	nb;

	nb = va_arg(ap, unsigned long long);
	ft_putnbr_basex(nb, base, count);
}

void	ft_print_p(va_list ap, char *base, int *count)
{
	unsigned long long	nb;

	nb = va_arg(ap, unsigned long long);
	if (nb == 0)
	{
		write(1, "(nil)", 5);
		*count += 5;
		return ;
	}
	write(1, "0x", 2);
	*count += 2;
	ft_putnbr_basep(nb, base, count);
}

void	ft_putnbr_basex(unsigned int nb, char *base, int *count)
{
	unsigned int	len;

	len = ft_strlen(base);
	if (nb >= len)
	{
		ft_putnbr_basep(nb / len, base, count);
		ft_putnbr_basep(nb % len, base, count);
	}
	else
	{
		ft_putchar_fd(base[nb], 1);
		*count += 1;
	}
}

void	ft_putnbr_basep(unsigned long nb, char *base, int *count)
{
	unsigned int	len;

	len = ft_strlen(base);
	if (nb >= len)
	{
		ft_putnbr_basep(nb / len, base, count);
		ft_putnbr_basep(nb % len, base, count);
	}
	else
	{
		ft_putchar_fd(base[nb], 1);
		*count += 1;
	}
}
