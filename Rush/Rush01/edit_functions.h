/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edit_functions.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 23:03:23 by ntorres           #+#    #+#             */
/*   Updated: 2019/06/16 23:03:29 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EDIT_FUNCTIONS_H
# define EDIT_FUNCTIONS_H

int		check_if_one(int vals[4], int i, int count);

void	remove_options(int (*map)[4][4][4], int x, int y, int val);

void	assign_and_remove(int (*map)[4][4][4], int x, int y, int val);

void	remove_if_last(int (*map)[4][4][4], int x, int y, int k);

#endif
