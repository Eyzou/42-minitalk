/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:52:21 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/20 12:51:36 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int main(void)
{
    int test_char = 'a';

    if (ft_isdigit(test_char))
    {
        printf("%c est un digit\n", test_char);
    }
    else
    {
        printf("%c n'est pas un digit\n", test_char);
    }

    return 0;
}*/