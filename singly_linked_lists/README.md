# Singly Linked Lists

This project is part of the Holberton School low-level programming curriculum. It focuses on the implementation and manipulation of singly linked lists in C.

## Learning Objectives

By the end of this project, you should be able to:

- Understand the structure and functionality of singly linked lists.
- Implement functions to manipulate and traverse singly linked lists.
- Use dynamic memory allocation with `malloc` and proper memory management with `free`.
- Follow the Betty coding style and proper documentation practices.

## Requirements

- **Allowed editors:** `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the flags:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No use of global variables
- Maximum of 5 functions per file
- Only allowed C standard library functions: `malloc`, `free`, `exit`
- Use of `_putchar` is allowed
- All header files must be include guarded
- All code must follow **Betty** coding and documentation style

## Data Structure

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
