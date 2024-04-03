/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:53:29 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/26 11:11:27 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	res;

	res = count * size;
	if (size != 0 && count != res / size)
		return (NULL);
	dst = malloc(res);
	if (!dst)
		return (NULL);
	ft_bzero(dst, res);
	return (dst);
}

/*int	main(void)
{
    // Déclaration et initialisation d'une taille de tableau
    size_t num_elements = 5;

    // Allocation d'un tableau d'entiers avec calloc
    int *arr = (int *)calloc(num_elements, sizeof(int));

    // Vérification de l'allocation
    if (arr == NULL)
    {
        fprintf(stderr, "Allocation de mémoire échouée.\n");
        return 1;
    }

    // Affichage des éléments du tableau
    printf("Tableau alloué :\n");
    for (size_t i = 0; i < num_elements; i++)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Libération de la mémoire allouée
    free(arr);

    return 0;
}
*/