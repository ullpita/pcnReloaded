/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 14:23:23 by upierre-          #+#    #+#             */
/*   Updated: 2017/02/22 14:23:25 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 < *s2)
			return (-1);
		if (*s1 > *s2)
			return(1);
		s1++;
		s2++;
		if (*s1 == *s2)
			return(0);
	}
	return(0);
}