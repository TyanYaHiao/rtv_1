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

t_vec3	vec3_normalized(const t_vec3 *a)
{
	double l;

	l = vec3_length(a);
	return ((t_vec3){a->x / l, a->y / l, a->z / l});
}

void	vec3_normalize(t_vec3 *v)
{
	double l;

	l = vec3_length(v);
	v->x /= l;
	v->y /= l;
	v->z /= l;
}

t_vec3	vec3_copy(const t_vec3 *a)
{
	return ((t_vec3){a->x, a->y, a->z});
}

t_vec3	vec3_scale(const t_vec3 *a, double nb)
{
	return ((t_vec3){a->x / nb, a->y / nb, a->z / nb});
}

t_vec3	vec3_multi(const t_vec3 *a, double mag)
{
	return ((t_vec3){a->x * mag, a->y * mag, a->z * mag});
}
