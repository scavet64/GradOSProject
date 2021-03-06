#include "../include/conversion.h"

/**
 * K&R implementation
 * Converts an integer to an ascii character
 */
void intToAscii(int n, char str[])
{
    int i, sign;
    if ((sign = n) < 0)
    {
        n = -n;
    }
    i = 0;
    do
    {
        str[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0)
    {
        str[i++] = '-';
    }
    str[i] = '\0';

    reverse(str);
}