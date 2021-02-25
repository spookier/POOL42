/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcostin <costinalexandru777@gmail.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:04:01 by mcostin           #+#    #+#             */
/*   Updated: 2021/02/18 12:08:34 by mcostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr_dest;
	int		i;

	i = 0;
	ptr_dest = dest;
	while (*ptr_dest != '\0')
	{
		ptr_dest++;
	}
	while (src[i] != '\0')
	{
		*ptr_dest++ = src[i];
		i++;
	}
	*ptr_dest = '\0';
	return (dest);
}
