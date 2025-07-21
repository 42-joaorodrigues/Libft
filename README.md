# Libft

![42 Badge](https://img.shields.io/badge/42-Libft-brightgreen)
![C Badge](https://img.shields.io/badge/Language-C-blue)
![Status Badge](https://img.shields.io/badge/Status-Completed-success)

## What I Learned

Through this foundational project at 42 School, I developed key programming skills and knowledge:

- **Low-level memory manipulation** - Gained deep understanding of how data is stored and manipulated in memory
- **Data structure implementation** - Built linked lists from scratch and learned proper memory management
- **Pointer arithmetic** - Mastered complex pointer operations for memory access and manipulation
- **String manipulation algorithms** - Implemented various string handling functions with optimal approaches
- **Memory allocation best practices** - Learned proper malloc/free usage with zero memory leaks
- **Modular programming** - Created reusable, well-encapsulated functions with clear interfaces
- **Error handling** - Implemented robust error checking for edge cases and unexpected inputs
- **Function pointers** - Used function pointers to create flexible, generic algorithms
- **Defensive programming** - Added input validation and boundary checking to prevent crashes
- **Code optimization** - Balanced readability with performance considerations

This project reinforced my attention to detail, problem-solving abilities, and low-level programming skills that are transferable to any software development role.

## About the Project

Libft is a personal C library containing recoded standard functions as well as additional utilities. It serves as a foundation for all future C projects at 42 School by providing essential tools for:

- Memory manipulation
- String operations
- Character checks
- Linked list operations
- Type conversions
- File descriptor operations

## Implementation Details

The library consists of 40+ functions divided into three main categories:

### Standard Libc Functions

Reimplemented standard C library functions with identical behavior to their original counterparts:

| Memory Functions | String Functions | Character Classification | Type Conversion |
|-----------------|-----------------|------------------------|-----------------|
| memset, bzero   | strlen, strlcpy | isalpha, isdigit      | atoi            |
| memcpy, memmove | strlcat, strchr | isalnum, isascii      | calloc          |
| memchr, memcmp  | strrchr, strncmp| isprint               | strdup          |
|                 | strnstr         | toupper, tolower      |                 |

### Extended Functionality

Custom functions that enhance the standard library:

| String Manipulation    | File Descriptor Operations |
|------------------------|----------------------------|
| ft_substr - Extract substring | ft_putchar_fd - Write char |
| ft_strjoin - Concatenate     | ft_putstr_fd - Write string |
| ft_strtrim - Remove chars    | ft_putendl_fd - Write with newline |
| ft_split - String to array   | ft_putnbr_fd - Write number |
| ft_itoa - Int to string      |                             |
| ft_strmapi - Map function    |                             |
| ft_striteri - Iterate with index |                         |

### Linked List Manipulation (Bonus)

Complete suite of functions for creating and manipulating linked list data structures:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

- List creation and inspection (ft_lstnew, ft_lstsize, ft_lstlast)
- List modification (ft_lstadd_front, ft_lstadd_back, ft_lstdelone, ft_lstclear)
- List iteration with function application (ft_lstiter, ft_lstmap)

## Usage

```bash
# Compile the library
make

# Include bonus functions
make bonus

# Clean object files
make clean

# Remove all generated files
make fclean

# Rebuild
make re
```

## Integration Example

```c
#include "libft.h"

int main(void)
{
    // Create a linked list
    t_list *list = NULL;
    t_list *node1 = ft_lstnew("First element");
    t_list *node2 = ft_lstnew("Second element");
    
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    
    // Process each element
    ft_lstiter(list, (void (*)(void *))ft_putendl_fd, 1);
    
    // Clean up
    ft_lstclear(&list, free);
    
    return (0);
}
```

## Technical Challenges Overcome

- **Handling edge cases** - Ensuring functions work correctly with NULL inputs, zero-length strings, and extreme values
- **Optimizing memory usage** - Balancing between performance and memory efficiency
- **Deep vs shallow copying** - Understanding when each approach is appropriate
- **Preventing memory leaks** - Implementing proper cleanup in complex functions like ft_split and ft_lstmap
- **Managing buffer overflows** - Using size-bounded functions to prevent memory corruption

---

*This project was completed as part of the 42 School curriculum, demonstrating my proficiency in C programming, algorithm implementation, and software engineering fundamentals.*

---

## License

This project is licensed under the [MIT License](./LICENSE).
