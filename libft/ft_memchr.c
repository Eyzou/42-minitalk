/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:06:31 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/20 12:51:40 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*int main() {
    char str[] = "Hello, world!";
    char *result;

    // Search for 'o' in the string "Hello, world!"
    result = ft_memchr(str, 'o', sizeof(str));
    if (result != NULL) {
        printf("Found 'o' at index: %ld\n", (result - str));
    } else {
        printf("Character not found!\n");
    }

    // Search for 'z' in the string "Hello, world!"
    result = ft_memchr(str, 'z', sizeof(str));
    if (result != NULL) {
        printf("Found 'z' at index: %ld\n", (result - str));
    } else {
        printf("Character not found!\n");
    }

    return 0;
}*/
