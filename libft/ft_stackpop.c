/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:28:43 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/10/13 15:38:26 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_content	ft_stackpop(t_stack *stack)
{
	t_content		ret;
	t_stack_elem	*tmp;

	tmp = stack->top;
	stack->top = stack->top->prev;
	stack->size--;
	ret = tmp->cont;
	ft_free(tmp);
	return (ret);
}
