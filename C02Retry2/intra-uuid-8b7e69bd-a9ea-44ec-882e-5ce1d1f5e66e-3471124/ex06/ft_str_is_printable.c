/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcostin <costinalexandru777@gmail.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:26:06 by mcostin           #+#    #+#             */
/*   Updated: 2021/02/20 13:26:10 by mcostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr <= 31 || *charptr == 127)
		{
			return (0);
		}
		charptr++;
	}
	return (1);
}
