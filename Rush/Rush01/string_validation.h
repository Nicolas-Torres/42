/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_validation.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 23:00:48 by ntorres           #+#    #+#             */
/*   Updated: 2019/06/16 23:00:53 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_VALIDATION_H
# define STRING_VALIDATION_H

int	is_vld_str(char *data, int i, int (*input_data)[4][4], int j);

int	chck_dups(int input[4][4], int one, int max);

#endif
