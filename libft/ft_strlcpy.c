/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:07:54 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/20 12:51:55 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (size > 1 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
		size--;
	}
	if (size > 0)
		*dest = '\0';
	while (*src != '\0')
	{
		src++;
		i++;
	}
	return (i);
}

/*int main (void)
{
    char dest[10] = "Kiokoo";
    char *src = "ouiqa";
    printf("%zu \n",ft_strlcpy(dest,src,3));
}*/
