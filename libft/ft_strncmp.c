/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:53:11 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/26 12:29:27 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*str1 && *str2 && *str1 == *str2 && --n)
	{
		str2++;
		str1++;
	}
	if (*str1 > *str2)
		return (1);
	else if (*str1 < *str2)
		return (-1);
	return (0);
}

/*int main (void)
{
    char s1[9] = "Salut";
    char s2[9] = "Salut";
    printf("%d \n", ft_strncmp(s1,s2,3));
}*/
