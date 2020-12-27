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

#include "material.h"

t_material		make_material(t_vec3 albedo, double a, double d)
{
	return ((t_material) {
		.albedo = albedo,
		.ambient = a,
		.diffuse = d,
	});
}
