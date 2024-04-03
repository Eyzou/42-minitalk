/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:52:45 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/20 12:51:44 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = s;
	value = (unsigned char)c;
	while (n--)
	{
		*ptr++ = value;
	}
	return (s);
}

/*int main(void)
{
    char buffer[10];

    // Utilisation de memset pour initialiser le tableau à la valeur 'B'
    ft_memset(buffer, 'B', sizeof(buffer));

    // Affichage du contenu du tableau
    printf("Contenu du tableau après mymemset : %s\n", buffer);

    return 0;
}
*/
