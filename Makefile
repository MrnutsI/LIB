##
## EPITECH PROJECT, 2023
## root [WSL: Debian]
## File description:
## Makefile
##

MAIN = main.c \

SRC	=	lib/my_str_to_word_array.c \
		lib/my_count_words.c \
		lib/my_putstr.c \
		lib/my_getnbr.c \
		lib/my_strcmp.c \
		lib/my_strlen.c \
		lib/my_putchar.c \
		lib/my_atoi.c \
		lib/my_put_nbr.c \


TESTS   =	tests/test_lib.c \

NAME    =	test

all:    $(NAME)

$(NAME):	$(SRC)
	@echo -e "\e[0m\e[1mConstruction de la librairie..."
	@echo -e "\e[1m\e[32mConstruction terminée avec succès !"
	@echo -e "\e[0m\e[1mConstruction de l'executable..."
	@gcc -o $(NAME) $(MAIN) $(SRC) $(CFLAGS)
	@echo -e "\e[1m\e[32mConstruction terminée avec succès !"

clean:
	@echo -e "\e[0m\e[1mNettoyage des fichiers..."

fclean: clean
	@rm -f $(NAME)
	@rm -f ../../include/$(NAME)

tests_run:
	gcc -o unit_tests $(SRC) $(TESTS) -lcriterion --coverage
	./unit_tests

re:     fclean all