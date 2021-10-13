files.cpp = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
file.hpp = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

NAME = DiamondTrap

all : $(NAME)

$(NAME) : $(files.cpp) $(files.hpp)
		clang++ $(CFLAGS) $(files.cpp) -o $(NAME)

fclean :
		@rm  -f $(NAME)
		@echo "\033[7mfclean is done!\033[0m"

re	:  fclean all	


.PHONY : all clean  fclean