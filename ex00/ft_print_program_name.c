/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:01:11 by cristian          #+#    #+#             */
/*   Updated: 2023/02/19 10:20:21 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*name;

	if (argc >= 1)
	{
		i = 0;
		name = argv[0];
		while (name[i])
		{
			write(1, &name[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}	
}
