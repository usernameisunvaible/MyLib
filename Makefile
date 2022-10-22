##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

########### CONST ##########
CURRENT_PATH = $(shell pwd)

############ SRC ###########
SRC	=	main.c	\



########## COMPIL ##########
OBJ	=	$(SRC:.c=.o)
CFLAGS	+=	-g



########### MYLIB ###########
MYLIB_PATH = lib 
MYLIB_NAME = libmylib.a

MY_LIB_COMÏL =	rm -fr $(MYLIB_NAME);\
				cd $(MYLIB_PATH);\
				make;\
				mv $(MYLIB_NAME) $(CURRENT_PATH);\
				cd $(CURRENT_PATH)

MY_LIB_CLEAN =	cd $(MYLIB_PATH);\
				make clean;\
				cd $(CURRENT_PATH)

MY_LIB_FCLEAN =	cd $(MYLIB_PATH);\
				make fclean;\
				cd $(CURRENT_PATH)

############ LIBS ###########
LIB_LINKS = 	-L. -lmylib

########## METHODES #########
NAME	=	myLib

$(NAME):	$(OBJ)
	$(MY_LIB_COMÏL)
	gcc -o $(NAME) $(OBJ) $(LIB_LINKS)

all:	$(NAME)

clean:
	rm -fr $(OBJ)
	$(MY_LIB_CLEAN)

fclean:	clean
	rm -fr $(NAME)
	$(MY_LIB_FCLEAN)

re:	fclean all
