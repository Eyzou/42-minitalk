/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:09:08 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/26 11:09:12 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (!(*s) || len == 0 || (start) > (unsigned int)(size - 1))
		return (ft_strdup(""));
	if (len <= (size - start))
		str = ft_calloc(len + 1, sizeof(char));
	else
		str = ft_calloc(sizeof(char), (size - start) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while ((i < len) && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/* int main(void) 
{
    char chaine[] = "Exemple de chaine";
    int debut = 8;
    int longueur = 2;
   
    printf("Sous-chaine : %s\n", ft_substr(chaine, debut, longueur)); //
    
    return 0;
}*/