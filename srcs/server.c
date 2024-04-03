/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:54:27 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/26 10:49:39 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <signal.h>
#include <sys/types.h>

void	signal_handler(int signal, siginfo_t *info, void *content)
{
	static int	bit;
	static char	c;

	(void)content;
	c |= (signal == SIGUSR1);
	bit++;
	if (bit == 8)
	{
		if (c == '\0')
			ft_printf("\n");
		else
			ft_printf("%c", c);
		bit = 0;
		c = 0;
	}
	else
		c <<= 1;
	if (signal == SIGUSR1)
		kill(info->si_pid, SIGUSR1);
	else if (signal == SIGUSR2)
		kill(info->si_pid, SIGUSR2);
}

int	main(void)
{
	struct sigaction	action;

	ft_printf("The PID is %d\n", getpid());
	action.sa_sigaction = signal_handler;
	action.sa_flags = SA_SIGINFO;
	sigemptyset(&action.sa_mask);
	if (sigaction(SIGUSR1, &action, NULL) == -1)
		ft_printf("Error\n");
	if (sigaction(SIGUSR2, &action, NULL) == -1)
		ft_printf("Error\n");
	while (1)
		pause();
	return (0);
}
