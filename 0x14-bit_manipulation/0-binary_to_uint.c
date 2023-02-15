#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    unsigned int index = 0;
    int sum;

    for (; index < 8; index++)
    {
        if (b[index] == 1)
        {
            sum = sum + (2 ^ index);
        }
        index++;
    }
}