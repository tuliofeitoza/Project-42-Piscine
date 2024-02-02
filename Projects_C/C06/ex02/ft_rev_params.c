/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:07:51 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 17:23:22 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	iv;
	int	fc;

	iv = 0;
	fc = ac - 1;
	(void) ac;
	while (fc > 0)
	{
		iv = 0;
		while (av[fc][iv] != '\0')
		{
			write(1, &av[fc][iv], 1);
			iv++;
		}
		fc--;
		write(1, &"\n", 1);
	}
}
