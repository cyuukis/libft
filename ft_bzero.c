/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:11:29 by cyuuki            #+#    #+#             */
/*   Updated: 2020/11/06 17:11:32 by cyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	char	*str;
	int		i;

	str = s;
	i = 0;
	while (n)
	{
		str[i] = '\0';
		i++;
		n--;
	}
}