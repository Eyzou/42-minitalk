/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:17:13 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/21 09:35:40 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (len == 0 && !big)
		return (0);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] && big [i + j] == little[j] && i + j < len)
			j++;
		if (j == ft_strlen(little))
			return ((char *) big + i);
		i++;
		j = 0;
	}
	return (NULL);
}

/*int main (void)
{
    char s1[20] = "kikoo Salut oicava";
    char s2[9] = "oicava";
    printf("%s \n", ft_strnstr(s1,s2,20));
}*/
