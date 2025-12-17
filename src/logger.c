#include "../include/logger.h"

void logger(const char* tag, const char* message)
{
#ifdef DEBUG
	printf("[%s]: %s\n", tag, message);
#endif
}
