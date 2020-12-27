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

#ifndef OBJECT_H
# define OBJECT_H

# include "shape.h"
# include "material.h"

typedef struct	s_object
{
	t_shape		shape;
	t_material	material;
}				t_object;

t_shape			make_sphere(double x, double y, double z, double r);
t_shape			make_plane(t_vec3 pos, t_vec3 normal);
t_shape			make_cylinder(double x, double y, double z, double r);
t_shape			make_cone(t_vec3 pos, double h, double r);

#endif
