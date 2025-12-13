#include "passcheck.h"

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

int password_strength(const char* string)
{

#ifdef DEBUG
	printf(">>> THIS IS DEBUG BUILD <<<\n");
#endif

#ifdef RELEASE
	printf(">>> THIS IS RELEASE BUILD <<<\n");
#endif

#ifdef TESTING
	printf(">>> THIS IS TESTING BUILD <<<\n");
#endif

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

	return score;
}
