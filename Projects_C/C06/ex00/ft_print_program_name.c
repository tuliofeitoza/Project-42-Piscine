/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:40:40 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 16:52:23 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	(void) ac;
	while (av[0][i] != '\0')
	{
		write(1, &av[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
