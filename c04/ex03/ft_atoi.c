/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcostin <costinalexandru777@gmail.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:13:55 by mcostin           #+#    #+#             */
/*   Updated: 2021/02/22 11:21:45 by mcostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int result;
	int i;
	int negative;

	negative = 1;
	result = 0;
	i = 0;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			negative = negative * -1;
		}
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	return (result * negative);
}
