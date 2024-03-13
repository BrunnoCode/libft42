/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:25:55 by bbotelho          #+#    #+#             */
/*   Updated: 2024/03/13 21:22:40 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node != NULL)
	{
		node->content = content;
		node->next = NULL;
	}
	return (node);
}

#include <stdio.h>
int main()
{
	t_list *content = NULL;
	printf("nodo crado -> %p\n contenido dentro del nodo -> %p\n siguiente nodo como null -> %p\n", content, content->content, content->next);
	printf("\n\n\n");
	//content->content = ft_lstnew(content);
	//printf("despues de la funcion nodo creado -> %p\n contenido dentro del nodo -> %p\n siguiente nodo como null -> %p\n", content, content->content, content->next);
	return (0);
}
