#include "../include/logger.h"

void logger(const char* tag, const char* message)
{
	printf("[%s]: %s\n", tag, message);
}
