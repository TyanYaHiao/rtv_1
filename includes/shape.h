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

#ifndef SHAPE_H
# define SHAPE_H

# include <stdbool.h>

# include "ray.h"
# include "intersection.h"
# include "shapes.h"

typedef union	u_shape_value {
	t_sphere	sphere;
	t_plane		plane;
	t_cylinder	cylinder;
	t_cone		cone;
}				t_shape_value;

typedef struct	s_shape
{
	enum {
		SPHERE,
		PLANE,
		CYLINDER,
		CONE,
	}				type;
	t_shape_value	value;
}				t_shape;

bool			shape_does_intersect(
	const t_shape *shape, const t_ray *ray);
bool			shape_intersect(
	const t_shape *shape, const t_ray *ray, t_intersection *isect);

#endif
