/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   app.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <fsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:30:27 by fsmith            #+#    #+#             */
/*   Updated: 2019/09/24 20:32:00 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT_CONTAINER_H
# define OBJECT_CONTAINER_H

# include "object.h"

typedef struct		s_object_node
{
	t_object				*object;
	struct s_object_node	*next;
}					t_object_node;

typedef struct		s_object_container {
	t_object_node *root;
}					t_object_container;

t_object_container	*container_make(void);
void				container_push_object(
	t_object_node **container, t_object *obj);
bool				container_does_intersect(
	const t_object_container *container,
	const t_ray *ray);
bool				container_intersect(
	const t_object_container *container,
	const t_ray *ray,
	t_intersection *isect);
void				container_free(
	t_object_node *node);

#endif
