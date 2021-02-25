/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcostin <costinalexandru777@gmail.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:47:40 by mcostin           #+#    #+#             */
/*   Updated: 2021/02/24 13:50:00 by mcostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i < nb)
	{
		result = result * (i + 1);
		i++;
	}
	return (result);
}
