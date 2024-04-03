/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:16:05 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/07 17:03:16 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_base(char *str)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j])
		{	
			if (str[i] == '-' || str[i] == '+')
				return (0);
			if (str[i] == str[j])
				count++;
			j++;
		}
		if (count > 1)
			return (0);
		count = 0;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base, int *count)
{
	int		len;
	long	n;

	n = nbr;
	len = ft_strlen(base);
	if (check_base(base) == 0)
		return ;
	if (n < 0)
	{
		n = -n ;
		ft_putchar_fd('-', 1);
	}
	if (n >= len)
	{
		ft_putnbr_base(n / len, base, count);
		ft_putnbr_base(n % len, base, count);
	}
	else
	{
		ft_putchar_fd(base[n], 1);
	}
}

/*int	main(void)
{
	int n = 0;
	printf(ft_putnbrbase(n,10,1));
}*/