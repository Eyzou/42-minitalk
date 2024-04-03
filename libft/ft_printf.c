/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:42:11 by elo               #+#    #+#             */
/*   Updated: 2024/03/26 10:42:22 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_format(char spec, va_list ap, int *count)
{
	if (spec == '%')
		ft_print_percent('%', count);
	else if (spec == 'c')
		ft_print_c(ap, count);
	else if (spec == 's')
		ft_print_s(ap, count);
	else if (spec == 'd' || spec == 'i')
		ft_print_nb(ap, "0123456789", count);
	else if (spec == 'x')
		ft_print_x(ap, "0123456789abcdef", count);
	else if (spec == 'X')
		ft_print_x(ap, "0123456789ABCDEF", count);
	else if (spec == 'p')
		ft_print_p(ap, "0123456789abcdef", count);
	else if (spec == 'u')
		ft_print_un(ap, "0123456789", count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, str);
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			print_format(str[i], ap, &count);
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}

/*int main(void)
{
	ft_printf ("je suis un c %c\nje suis Elo %s\n", 'c',"Elo");
	ft_printf("je suis 42 %d \n", 42);
	ft_printf("je suis 42 %i \n", 42);
	ft_printf("je suis 0x2A %x \n", 42);
	ft_printf("je suis un pointeur %p \n", "kikoo");
	return (0);
}*/