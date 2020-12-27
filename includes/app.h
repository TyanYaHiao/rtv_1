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

#ifndef APP_H
# define APP_H

# include <SDL2/SDL.h>
# include <stdlib.h>
# include <stdbool.h>

# include "scene.h"
# include "keystate.h"

typedef struct	s_app
{
	size_t		width;
	size_t		height;

	bool		running;

	t_scene		*scene;

	SDL_Window	*window;
	SDL_Surface	*screen_surface;

	t_keystate	keystate;
}				t_app;

int				app_make(t_app *app, size_t width, size_t height);
int				app_run(t_app *app);

#endif
