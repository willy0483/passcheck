#ifndef PASSCHECK_LIBRARY_H
#define PASSCHECK_LIBRARY_H

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum passcheck_type
{
	WEAK = 0,
	OK,
	STRONG
};

int has_lower(const char* string);
int has_upper(const char* string);
int has_digit(const char* string);
int has_symbol(const char* string);
int password_length(const char* string);
enum passcheck_type password_strength(const char* string);

#ifdef DEBUG

void passcheck_debug(const char* string);

#endif

#endif
