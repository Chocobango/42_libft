# libft | school 42

✅ Passed with **125**/100

My version of school 42 libft project created at [Hive Helsinki](https://www.hive.fi/en/)

## About

The aim of the project is to build a C library. The library is comprised of some standard C library functions recreated by me as well as some additional non-standard functions. It also features a bonus part, which is an implementaion of a singly linked list with a set of functions to manipulate it.

### Functions from standard C library that were recreated

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

### Additional functions

### Linked list (bonus)

## How to compile

- clone the repo and cd into it
- run `make`
- to include bonus functions (linked list), run `bonus`

### To use the library in your project

- Compile the library
- Add `#include "libft.h"` to your project
- Compile your project like so: `gcc project.c libft.a`
