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

#include "vec3.h"

t_vec3	vec3_add(const t_vec3 *a, const t_vec3 *b)
{
	return ((t_vec3){a->x + b->x, a->y + b->y, a->z + b->z});
}

t_vec3	vec3_sub(const t_vec3 *a, const t_vec3 *b)
{
	return ((t_vec3){a->x - b->x, a->y - b->y, a->z - b->z});
}

double	vec3_dot(const t_vec3 *a, const t_vec3 *b)
{
	return (a->x * b->x + a->y * b->y + a->z * b->z);
}

t_vec3	vec3_cross(const t_vec3 *a, const t_vec3 *b)
{
	return ((t_vec3){a->y * b->z - a->z * b->y,\
	a->z * b->x - b->z * a->x, a->x * b->y - b->x * a->y});
}
