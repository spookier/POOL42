/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcostin <costinalexandru777@gmail.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:30:28 by mcostin           #+#    #+#             */
/*   Updated: 2021/02/20 16:07:40 by mcostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int intu;

	if (nbr < 0)
	{
		ft_putchar('-');
		intu = -nbr;
	}
	else
	{
		intu = nbr;
	}
	if (intu <= 9)
	{
		ft_putchar('0' + _nbr);
	}
	else
	{
		ft_putnbr(_nbr / 10);
		ft_putnbr(_nbr % 10);
	}
}
