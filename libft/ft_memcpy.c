/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:47:45 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/22 13:35:27 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

/*int main(void)
{
    char buffer1[10];
    char buffer2[20];

  for (int i = 0; i < 100; i++) {
    buffer1[i] = i;
  }

  // Copions le buffer1 dans le buffer2.
  ft_memcpy(buffer2, buffer1, 100);

  // Affichons le contenu du buffer2.
  for (int i = 0; i < 100; i++) {
    printf("%i\n", buffer2[i]);
  }

  return 0;
}*/