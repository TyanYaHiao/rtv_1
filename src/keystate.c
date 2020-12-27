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

#include "keystate.h"
#include <stdbool.h>

void			keystate_key_down(t_keystate *ks, SDL_Scancode key)
{
	if (key <= 512)
		ks->keys[key] = true;
}

void			keystate_key_up(t_keystate *ks, SDL_Scancode key)
{
	if (key <= 512)
		ks->keys[key] = false;
}

bool			is_key_down(const t_keystate *ks, SDL_Scancode key)
{
	if (key <= 512)
		return (ks->keys[key]);
	else
		return (false);
}
