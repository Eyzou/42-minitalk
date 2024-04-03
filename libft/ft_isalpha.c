/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:07:10 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/20 12:51:32 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int main(void)
{
    char test_char = '3';

    if (ft_isalpha(test_char))
    {
        printf("%c est alphanumérique.\n", test_char);
    }
    else
    {
        printf("%c n'est pas alphanumérique.\n", test_char);
    }

    return 0;
}
*/