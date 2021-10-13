files.cpp = main.cpp ClapTrap.cpp
file.hpp = ClapTrap.hpp
CFLAGS = -Wall -Wextra -Werror

NAME = ClapTrap

all : $(NAME)

$(NAME) : $(files.cpp) $(files.hpp)
		clang++ $(CFLAGS) $(files.cpp) -o $(NAME)

fclean :
		@rm  -f $(NAME)
		@echo "\033[7mfclean is done!\033[0m"

re	:  fclean all	


.PHONY : all clean  fclean