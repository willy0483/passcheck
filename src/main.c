#include "../include/passcheck.h"
#include "../include/logger.h"

int main(int argc, char* argv[])
{

	for(int i = 1; i < argc; i++)
	{
		logger("DEBUG", argv[i]);
		switch(password_strength(argv[i]))
		{
			case WEAK: {
				printf("[Result]: WEAK\n\n");
				break;
			}

			case OK: {
				printf("[Result]: OK\n\n");
				break;
			}

			case STRONG: {
				printf("[Result]: STRONG\n\n");
				break;
			}
		}
	};

	return 0;
}
