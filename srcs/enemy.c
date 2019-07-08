/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 07:54:18 by sbosmer           #+#    #+#             */
/*   Updated: 2019/07/08 09:44:20 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void		enemy(const size_t id, const long long val, void *data)
{
	t_data	*d = (t_data*)data;
	t_enemy	*self = (t_enemy*)val;
	if (!self->logic)
		return ;
	self->logic(d, self);
	(void)id;
}

void		enemy_pipe(t_data *d)
{
	arr_iterv(d->scene.enemy_arr, d, &enemy);
	(void)d;
}