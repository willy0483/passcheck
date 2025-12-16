#include "../include/passcheck.h"

int main()
{

	const char* tests[] = { "awdawdawd", "1234", "Verystrongpassword1234!" };

	for(int i = 0; i < (sizeof(tests) / sizeof(const char*)); i++)
	{
		printf("Testing: %s\n", tests[i]);
		switch(password_strength(tests[i]))
		{
			case WEAK: {
				printf("Result: WEAK\n");
				break;
			}

			case OK: {
				printf("Result: OK\n");
				break;
			}

			case STRONG: {
				printf("Result: STRONG\n");
				break;
			}
		}
	};

	return 0;
}
