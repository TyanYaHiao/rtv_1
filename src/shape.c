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

#include "shape.h"

bool			shape_intersect(
	const t_shape *shape, const t_ray *ray, t_intersection *isect)
{
	static t_instersection_function fn_lookup_table[] = {
		sphere_intersect,
		plane_intersect,
		cylinder_intersect,
		cone_intersect,
	};

	return (fn_lookup_table[shape->type](shape, ray, isect));
}

bool			shape_does_intersect(
	const t_shape *shape, const t_ray *ray)
{
	t_intersection	dummy;

	dummy.t = INFINITY;
	return (shape_intersect(shape, ray, &dummy));
}
