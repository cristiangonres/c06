/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:14:43 by cristian          #+#    #+#             */
/*   Updated: 2023/02/19 10:42:12 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	sort_params(char **args, int n)
{
	int		i1;
	int		i2;
	int		count;
	char	*str;


	i1 = 1;
	count = n - 1;
	while (args[i1] < args[n - 1])
	{
		i2 = 0;
		printf("%s vs %s\n" , args[i1], args[i1+1]);
		while (i2 < n - 1)
		{
			printf("%c vs %c\n", args[i1][i2], args[i1 +1][i2]);
			if (args[i1][i2] > args[i1 + 1][i2] && args[i1+1][i2] != '\0' )
			{
				printf("Primera posición antes: %s\n", args[i1]);
				str = args[i1 + 1];
				args[i1 + 1] = args[i1];
				args[i1] = str;
				printf("Primera posición después: %s\n", args[i1]);
				break;
			} 
			else if (args[i1][i2] < args[i1 + 1][i2] && args[i1+1][i2] != '\0' )
				break;
			i2++;
		}
		if (i1 + 1  < n - 1 )
			i1++;
		if (count >= 0 && i1 == n )
		{
			printf("%i", count);
			count--;
			i1 = 1;
		}
	}
	i1 = 1;
	while (args[i1])
	{
		printf("%s\n", args[i1]);
		i1++;
	}
}
/*
void	print_arg (char *arg)
{
	int	i;
	int	j;

	while ()
}*/


int	main(int argc, char **argv)
{
	//int		i;
	int		j;
	
	sort_params(argv, argc);
	j = 1;
	if (argc >= 1)
	{
			
	}	
}
