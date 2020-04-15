/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_case.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thervieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 23:17:37 by thervieu          #+#    #+#             */
/*   Updated: 2019/06/16 23:17:47 by thervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPECIAL_CASE_H
# define SPECIAL_CASE_H

void	special_case_col(int (*map)[4][4][4], int data[4][4], int i, int j);

void	special_case_row(int (*map)[4][4][4], int data[4][4], int i, int j);

#endif
