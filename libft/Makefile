# ************************************************************************** */
#                                                                            */
#                                                        :::      ::::::::   */
#   Makefile                                           :+:      :+:    :+:   */
#                                                    +:+ +:+         +:+     */
#   By: joao-alm <joao-alm@student.1337.ma>        +#+  +:+       +#+        */
#                                                +#+#+#+#+#+   +#+           */
#   Created: 2024/10/21 10:55:50 by joao-alm          #+#    #+#             */
#   Updated: 2024/10/21 10:56:41 by joao-alm         ###   ########.fr       */
#                                                                            */
# ************************************************************************** */

# Compiler and Build Settings
NAME    = libft.a        # Library name
LIBC    = ar rc          # Archive command to create static library
CC      = cc             # C compiler
CFLAGS  = -Wall -Werror -Wextra  # Compiler flags for code quality
O_DIR   = obj            # Directory for object files
RM      = rm -rf         # Command for removing files/directories

# Character Classification and Conversion Functions
CHAR_SRC	= ft_isalnum.c \
              ft_isalpha.c \
              ft_isascii.c \
              ft_isdigit.c \
              ft_isprint.c \
              ft_toupper.c \
              ft_tolower.c

# String Manipulation Functions
STR_SRC	= ft_strlen.c \
          ft_strlcpy.c \
          ft_strlcat.c \
          ft_strchr.c \
          ft_strrchr.c \
          ft_strncmp.c \
          ft_strnstr.c \
          ft_strdup.c \
          ft_substr.c \
          ft_strjoin.c \
          ft_strtrim.c \
          ft_split.c \
          ft_strmapi.c \
          ft_striteri.c \
          ft_atoi.c \
		  ft_itoa.c

# Memory Manipulation Functions
MEM_SRC	= ft_bzero.c \
          ft_memcpy.c \
          ft_memset.c \
          ft_memmove.c \
          ft_memchr.c \
          ft_memcmp.c \
          ft_calloc.c

# File Descriptor Output Functions
FD_SRC	= ft_putchar_fd.c \
          ft_putstr_fd.c \
          ft_putendl_fd.c \
          ft_putnbr_fd.c

# Combine all source files for mandatory part
SRC	= $(CHAR_SRC) $(STR_SRC) $(MEM_SRC) $(FD_SRC)
OBJ	= $(SRC:%.c=$(O_DIR)/%.o)

# Linked List Manipulation Functions (Bonus Part)
BONUS_SRC	= ft_lstnew_bonus.c \
              ft_lstadd_front_bonus.c \
              ft_lstsize_bonus.c \
              ft_lstlast_bonus.c \
              ft_lstadd_back_bonus.c \
              ft_lstdelone_bonus.c \
              ft_lstclear_bonus.c \
              ft_lstiter_bonus.c \
              ft_lstmap_bonus.c
BONUS_OBJ	= $(BONUS_SRC:%.c=$(O_DIR)/%.o)

# ******************** Build Rules ********************

# Default target: build the library with mandatory functions
all: $(NAME)

# Pattern rule for compiling .c files into .o files
$(O_DIR)/%.o: %.c
	@mkdir -p $(O_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create the library archive from object files
$(NAME): $(OBJ)
	$(LIBC) $@ $^

# Build the library with both mandatory and bonus functions
bonus: $(OBJ) $(BONUS_OBJ)
	$(LIBC) $(NAME) $^

# ******************** Cleaning Rules ********************

# Remove object files
clean:
	$(RM) $(O_DIR)

# Remove object files and the library
fclean: clean
	$(RM) $(NAME)

# Rebuild the project from scratch
re: fclean all

# Phony targets (not file names)
.PHONY: all bonus clean fclean re
