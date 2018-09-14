#include <stdio.h>

/* power will take users input and lower case all capital letters */

main()
{
	int c;

		while ((c = getchar() ) != EOF)
			putchar(tolower(c));
	return 0;
}
