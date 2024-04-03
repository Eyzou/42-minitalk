/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:14 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/23 14:08:07 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int main(void)
{
    char test_char = 'A';

    if (ft_isalnum(test_char))
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