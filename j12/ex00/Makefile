# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kguillot <kguillot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/20 23:36:12 by kguillot          #+#    #+#              #
#    Updated: 2015/08/21 02:11:18 by kguillot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ=ft_display_file.c

EXEC=$(OBJ:.c=.o)

BIN=ft_display_file

all:
	gcc -c $(OBJ)
	gcc $(EXEC) -o $(BIN)

clean:
	rm $(EXEC) 

fclean:clean
	rm $(BIN)

re: fclean all
