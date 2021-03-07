/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:23:53 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/10 10:19:59 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= ' ' && *str <= 127))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
