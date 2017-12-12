#include <stdio.h>
#include "crypto.h"

int main()
{
	printf("%d\n", (int) hex_to_base64(0));
	return 0;
}
