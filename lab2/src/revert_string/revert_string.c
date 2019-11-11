#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
	int j = strlen(str) - 1;
    int n = j / 2;
    for (int i = 0; i < n; i++, j--)
    {
        *(str + i) ^= *(str + j);
        *(str + j) ^= *(str + i);
        *(str + i) ^= *(str + j);
    }
}

