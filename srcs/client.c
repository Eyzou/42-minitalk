/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:54:29 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/26 10:42:34 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <signal.h>
#include <sys/types.h>

void	send_bits(int server_pid, char c)
{
	int	bit;

	bit = 8;
	while (bit > 0)
	{
		bit--;
		if ((c >> bit) & 1)
			kill(server_pid, SIGUSR1);
		else
			kill(server_pid, SIGUSR2);
		usleep(400);
	}
}

int	args_check(int argc, char **argv)
{
	int	i;

	if (argc != 3 || argv[2] == NULL)
	{
		ft_printf("Error! Invalid arguments\n");
		return (1);
	}
	i = 0;
	while (argv[1][i])
	{
		if (!ft_isdigit(argv[1][i]))
		{
			ft_printf("the PID is not valid\n");
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_confirm(int signal)
{
	if (signal == SIGUSR1)
		ft_printf("Signal received\n");
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (args_check(argc, argv) == 0)
	{
		signal(SIGUSR1, ft_confirm);
		signal(SIGUSR2, ft_confirm);
		while (argv[2][i] != '\0')
		{
			send_bits(ft_atoi(argv[1]), argv[2][i]);
			i++;
		}
		send_bits(ft_atoi(argv[1]), '\n');
	}
	else
		return (EXIT_FAILURE);
}
