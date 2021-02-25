/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcostin <costinalexandru777@gmail.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:50:32 by mcostin           #+#    #+#             */
/*   Updated: 2021/02/17 10:50:48 by mcostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr < 'A')
		{
			return (0);
		}
		if ((*charptr > 'Z' && *charptr < 'a') || (*charptr > 'z'))
		{
			return (0);
		}
		charptr++;
	}
	return (1);
}
