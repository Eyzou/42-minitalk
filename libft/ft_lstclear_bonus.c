/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:57:29 by ehamm             #+#    #+#             */
/*   Updated: 2024/02/26 10:50:03 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*next;

	if (!del || !lst)
		return ;
	tmp = *lst;
	while (tmp)
	{	
		next = tmp -> next;
		del(tmp -> content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
