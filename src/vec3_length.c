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

double	vec3_length2(const t_vec3 *a)
{
	return (a->x * a->x + a->y * a->y + a->z * a->z);
}

double	vec3_length(const t_vec3 *a)
{
	return (sqrt(vec3_length2(a)));
}

double	vec3_distance(const t_vec3 *a, const t_vec3 *b)
{
	const t_vec3	delta = vec3_sub(b, a);

	return (vec3_length(&delta));
}
