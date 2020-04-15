# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/25 10:43:00 by ntorres-          #+#    #+#              #
#    Updated: 2019/06/26 20:49:47 by ntorres-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c ft_swap.c  ft_putstr.c ft_strlen.c ft_strcmp.c

ar rcs libft.a ft_putchar.o ft_swap.o  ft_putstr.o ft_strlen.o ft_strcmp.o
