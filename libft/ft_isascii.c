/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:50:04 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/20 12:51:34 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int main(void)
{
    int test_char = 129;

    if (ft_isascii(test_char))
    {
        printf("%c est un ASCII\n", test_char);
    }
    else
    {
        printf("%c n'est pas un ASCII\n", test_char);
    }

    return 0;
}
*/