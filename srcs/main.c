/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 21:00:54 by home              #+#    #+#             */
/*   Updated: 2020/05/16 01:58:00 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

int	main(void)
{
	t_display	display;

	SDLG_setup(&display);
	apply_background(display.pixels, display.background, display.size);

	poll_and_toolbar(&display);

	return (0);
}
