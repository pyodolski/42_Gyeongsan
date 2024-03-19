/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 14:24:11 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/05 19:42:31 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == (long)nb)
		return (i);
	return (0);
}