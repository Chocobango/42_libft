🚧 Work in progress 🚧

# libft | school 42

My version of school 42 libft project created at [Hive Helsinki](https://www.hive.fi/en/)

## About

The aim of the project is to build a C library. It is composed of some recreated standard C library functions, some additional non-standard functions, and an implementaion of a singly linked list with a set of functions.

### The following functions from standard C library were recreated:

- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi
- calloc
- strdup

## How to compile

- clone the repo and cd into it
- run `make`
- to include bonus functions (linked list), run `bonus`

### To use the library in your project

- Compile the library
- Add `#include "libft.h"` to your project
- Compile your project like so: `gcc project.c libft.a`
