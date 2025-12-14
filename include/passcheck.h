#ifndef PASSCHECK_LIBRARY_H
#define PASSCHECK_LIBRARY_H

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int has_lower(const char* string);
int has_upper(const char* string);
int has_digit(const char* string);
int has_symbol(const char* string);
int password_length(const char* string);
int password_strength(const char* string);

#endif
