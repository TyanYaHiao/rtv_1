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

#ifndef KEYSTATE_H
# define KEYSTATE_H

# include <stdbool.h>
# include <SDL2/SDL.h>

typedef struct	s_keystate
{
	bool	keys[SDL_NUM_SCANCODES];
}				t_keystate;

void			keystate_key_down(t_keystate *ks, SDL_Scancode key);
void			keystate_key_up(t_keystate *ks, SDL_Scancode key);
bool			is_key_down(const t_keystate *ks, SDL_Scancode key);

#endif
