/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:53:51 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/20 12:51:37 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int main(void)
{
    int test_char = '!';

    if (ft_isprint(test_char))
    {
        printf("%c est un printable char\n", test_char);
    }
    else
    {
        printf("%c n'est pas un printable charn", test_char);
    }

    return 0;
}*/
