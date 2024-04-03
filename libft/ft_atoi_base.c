/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:33:03 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/26 10:12:26 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	get_index(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (c == base[index])
			return (index);
		index++;
	}
	return (index);
}

int	is_space(char *str)
{
	if ((*str == 32) || (*str >= 9 && *str <= 13))
		return (1);
	return (0);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != str[j])
		{
			if ((is_space(&str[i]) || str[i] == '-' || str[i] == '+'))
				return (0);
			j++;
		}
		i++;
	}
	if (i == 0)
		return (0);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	length_base;
	int	index;

	sign = 1;
	result = 0;
	length_base = check_base(base);
	index = get_index(*str, base);
	if (check_base(base) == 0)
		return (0);
	while (is_space(str))
		str++;
	if (*str == '-')
		sign = sign * -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str <= length_base)
	{
		result = (result * length_base) + index;
		str++;
	}
	return (result * sign);
}

/*int	main(void)
{
	char	str[] = "38";
	char	base[] = "01";

	printf("%d", ft_atoi_base(str, base));
}*/
