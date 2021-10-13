/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:36:37 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/10/13 15:38:45 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stackpush(t_stack *stack, t_content content)
{
	t_stack_elem	*new;

	new = ft_malloc(sizeof(t_stack_elem));
	new->cont = content;
	new->prev = stack->top;
	stack->top = new;
	stack->size++;
}
