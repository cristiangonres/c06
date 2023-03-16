/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:06:31 by cristian          #+#    #+#             */
/*   Updated: 2023/02/19 10:23:00 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc >= 1)
	{
		j = argc - 1;
		while (j >= 1)
		{
			i = 0;
			while (argv[j][i])
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			j--;
			write(1, "\n", 1);
		}
	}	
}