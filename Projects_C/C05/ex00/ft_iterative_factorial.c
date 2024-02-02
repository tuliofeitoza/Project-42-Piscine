/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 02:09:27 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/31 02:10:52 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (fact);
	while (nb > 1)
	{
		fact *= nb;
		nb --;
	}
	return (fact);
}

/*#include <stdio.h>

int main (void)
{
	printf("%i", ft_iterative_factorial(10));
}*/
