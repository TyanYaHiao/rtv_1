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

#ifndef SCENE_H
# define SCENE_H

# include <SDL2/SDL.h>
# include "camera.h"
# include "object_container.h"
# include "light_container.h"
# include "keystate.h"

struct s_app;

typedef struct	s_scene
{
	t_camera			camera;
	t_object_container	objects;
	t_light_container	lights;
}				t_scene;

void			my_scene_make(t_scene *scene);

void			scene_update(t_scene *scene, t_keystate *ks);
void			scene_free(t_scene **scene);

t_vec3			light_contribution_at(
	const t_scene *scene, const t_intersection *isect, const t_ray *ray);

#endif
