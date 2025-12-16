#include "../include/passcheck.h"

int has_lower(const char* string)
{
	while(*string != 0)
	{
		if(islower(*string))
		{
			return 1;
		}
		string++;
	}
	return 0;
}

int has_upper(const char* string)
{
	while(*string != 0)
	{
		if(isupper(*string))
		{
			return 1;
		}
		string++;
	}
	return 0;
}

int has_digit(const char* string)
{
	while(*string != 0)
	{
		if(isdigit(*string))
		{
			return 1;
		}
		string++;
	}
	return 0;
}

int has_symbol(const char* string)
{
	while(*string != 0)
	{
		if(!isalnum(*string))
		{
			return 1;
		}
		string++;
	}
	return 0;
}

int password_length(const char* string)
{
	return strlen(string);
}

enum passcheck_type password_strength(const char* string)
{

	int score = 0;
	if(password_length(string) > 8)
	{
		score++;
	}
	if(has_upper(string))
	{
		score++;
	}
	if(has_lower(string))
	{
		score++;
	}
	if(has_digit(string))
	{
		score++;
	}
	if(has_symbol(string))
	{
		score++;
	}

	if(score <= 2)
		return WEAK;
	if(score <= 4)
		return OK;

	return STRONG;
}
