/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcostin <costinalexandru777@gmail.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:04:00 by mcostin           #+#    #+#             */
/*   Updated: 2021/02/20 13:28:44 by mcostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if (src[j] == 0)
			dest[i++] = 0;
		else
			dest[i++] = src[j++];
	}
	return (dest);
}
