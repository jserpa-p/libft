/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:35:45 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/10/13 15:38:39 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stackprint(t_stack *s, char *(*to_str)(t_content), char *delim)
{
	t_stack_elem	*ele;

	if (!s)
		return ;
	ele = s->top;
	if (to_str && ele)
		ft_putstr_fd(to_str(ele->cont), 1);
	else if (ele)
		ft_putnbr_fd(ele->cont.i, 1);
	while (ele->prev)
	{
		ele = ele->prev;
		ft_putstr_fd(delim, 1);
		if (to_str)
			ft_putstr_fd(to_str(ele->cont), 1);
		else
			ft_putnbr_fd(ele->cont.i, 1);
	}
	ft_putstr_fd("\n", 1);
}
