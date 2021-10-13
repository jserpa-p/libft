/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:34:24 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/10/13 15:47:46 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	populate(t_stack_elem **dest, t_stack_elem *src,
	t_content (*d)(t_content))
{
	if (!src)
	{
		*dest = NULL;
		return ;
	}
	*dest = ft_malloc(sizeof(t_stack_elem));
	if (d)
		(*dest)->cont = d(src->cont);
	else
		(*dest)->cont = src->cont;
	populate(&((*dest)->prev), src->prev, d);
}

t_stack	*ft_stackdup(t_stack *o, t_content(*dup)(t_content))
{
	t_stack	*ret;

	if (!o)
		return (NULL);
	ret = ft_malloc(sizeof(t_stack));
	if (!ret)
		return (NULL);
	populate(&(ret->top), o->top, dup);
	ret->size = o->size;
	return (ret);
}
