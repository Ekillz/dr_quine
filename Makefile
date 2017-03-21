# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emammadz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/07 13:01:08 by emammadz          #+#    #+#              #
#    Updated: 2017/03/21 17:38:47 by emammadz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = Colleen
EXEC2 = Grace
EXEC3 = Sully

SRCC =	Colleen.c
SRCC2 =	Grace.c
SRCC3 =	#Sully.c

SRCO = $(SRCC:%.c=%.o)
SRCO2 = $(SRCC2:%.c=%.o)
SRCO3 = $(SRCC3:%.c=%.o)

FLAG = -Wall -Werror -Wextra -ggdb

.PHONY: all fast clean fclean

all: Colleen Grace #Sully

@echo -n  $< :
	@gcc -o $@ -c $< $(FLAG) 
	@echo

Colleen: $(SRCO)
	@gcc -o $(EXEC) $(FLAG) $(SRCO)

Grace: $(SRCO2)
	@gcc -o $(EXEC2) $(FLAG) $(SRCO2)

Sully: $(SRCO3)
	@gcc -o $(EXEC3) $(FLAG) $(SRCO3)

clean:
	@rm -f $(SRCO)
	@rm -f $(SRCO2)
	#@rm -f $(SRCO3)

fclean: clean
	@rm $(EXEC)
	@rm $(EXEC2)
	#@rm $(EXEC3)

re: fclean all
