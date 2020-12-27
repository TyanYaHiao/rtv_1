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

#ifndef SHAPES_H
# define SHAPES_H

# include <stdbool.h>

# include "vec3.h"
# include "ray.h"
# include "intersection.h"

struct s_shape;

typedef bool(*t_instersection_function)(
	const struct s_shape *shape, const t_ray *ray, t_intersection *isect);
typedef struct	s_sphere
{
	t_vec3	origin;
	double	radius;
}				t_sphere;
typedef struct	s_sphere_f
{
	double b;
	double c;
	double disc;
	double t0;
	double t1;
	double t;
}				t_sphere_f;

bool			sphere_intersect(
	const struct s_shape *shape, const t_ray *ray, t_intersection *isect);

typedef struct	s_plane
{
	t_vec3	origin;
	t_vec3	normal;
}				t_plane;

bool			plane_intersect(
	const struct s_shape *shape, const t_ray *ray, t_intersection *isect);

typedef struct	s_cylinder
{
	t_vec3	origin;
	t_vec3	rot;
	double	r;
}				t_cylinder;

typedef struct	s_cylinder_f
{
	const t_cylinder	*cylinder;
	t_vec3				rot_dir;
	t_vec3				rot_orig;
	t_vec3				p0;
	double				a;
	double				b;
	double				c;
	double				disc;
	double				t;
}				t_cylinder_f;

bool			cylinder_intersect(
	const struct s_shape *shape, const t_ray *ray, t_intersection *isect);

typedef struct	s_cone
{
	double	cas;
	double	sas;
	t_vec3	origin;
	double	h;
	double	r;
	t_vec3	rot;
}				t_cone;

typedef struct	s_cone_f
{
	const t_cone	*co;
	t_vec3			rd;
	t_vec3			rot_orig;
	t_vec3			p0;
	double			a;
	double			b;
	double			c;
	double			delta;
	double			t;
	double			y;
}				t_cone_f;

bool			cone_intersect(
	const struct s_shape *shape, const t_ray *ray, t_intersection *isect);

#endif
