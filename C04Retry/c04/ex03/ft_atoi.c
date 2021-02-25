/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcostin <costinalexandru777@gmail.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:13:55 by mcostin           #+#    #+#             */
/*   Updated: 2021/02/22 14:57:08 by mcostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_atoi(char *str)
{
	int		nombre;
	int		signe;
	char	*ptr;

	nombre = 0;
	signe = 1;
	ptr = str;
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	while (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			signe *= -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		nombre *= 10;
		nombre += (int)(*ptr - '0');
		ptr++;
	}
	return (nombre * signe);
}
