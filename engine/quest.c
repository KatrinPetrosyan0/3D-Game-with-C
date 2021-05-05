/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:59:53 by kpetrosy          #+#    #+#             */
/*   Updated: 2021/05/05 14:59:56 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "engine.h"

void
	check_quest(t_game *game)
{
	if (MAP(game->camera.pos, game->config) == '4')
	{
		MAP(game->camera.pos, game->config) = '0';
		game->collected++;
		delete_sprite(&game->sprites, &game->camera.pos);
	}
}

void
	count_items(t_game *game)
{
	int	i;
	int	j;

	game->to_collect = 0;
	i = 0;
	while (i < game->config.rows)
	{
		j = 0;
		while (j < game->config.columns)
		{
			if (MAP_XY(j, i, game->config) == '4')
				game->to_collect++;
			j++;
		}
		i++;
	}
}
