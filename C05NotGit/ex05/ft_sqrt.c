/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcostin <costinalexandru777@gmail.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:59:46 by mcostin           #+#    #+#             */
/*   Updated: 2021/02/24 14:00:44 by mcostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int i;

	if (nb < 1)
		return (0);
	i = 1;
	while (i * i < (unsigned int)nb)
		i++;
	if (i * i == (unsigned int)nb)
		return (i);
	else
		return (0);
}
