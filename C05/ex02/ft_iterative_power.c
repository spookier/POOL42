/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcostin <costinalexandru777@gmail.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:53:30 by mcostin           #+#    #+#             */
/*   Updated: 2021/02/24 13:55:10 by mcostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i < nb)
	{
		result = nb * nb;
		i++;
	}
	return (result);
}
