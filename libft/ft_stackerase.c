/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackerase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:26:14 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/10/13 15:38:11 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stackerase(t_stack *stack, void (*del)(t_content))
{
	while (ft_stacksize(stack))
	{
		if (del)
			del(ft_stackpop(stack));
		else
			ft_stackpop(stack);
	}
	ft_free(stack);
}
