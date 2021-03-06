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

#include "primitives.h"

/*
** TODO: handle error
*/

void		prim_put_pixel(
	SDL_Surface *surface, size_t x, size_t y, uint32_t color)
{
	uint32_t *pixels_arr;
	uint32_t *loc;

	pixels_arr = (uint32_t*)surface->pixels;
	if (x >= (size_t)surface->w && y >= (size_t)surface->h)
		return ;
	loc = &pixels_arr[x + y * surface->w];
	*loc = color;
}

void		prim_clear(SDL_Surface *surface, uint32_t color)
{
	uint32_t	*pixels_arr;
	size_t		index;

	pixels_arr = (uint32_t*)surface->pixels;
	index = 0;
	while (index < (size_t)(surface->w * surface->h))
	{
		pixels_arr[index] = color;
		index++;
	}
}
