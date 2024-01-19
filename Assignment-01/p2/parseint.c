#include "parseint.h"

//astaj22
//gudlaugv22

/*
 * Returns the value of c or -1 on error
 */
int convertDecimalDigit(char c)
{

    if (c >= '0' && c <= '9') {


        return c - '0';

    } else {

        return -1;
    }

}

/*
 * Parses a non-negative integer, interpreted as octal when starting with 0,
 * decimal otherwise. Returns -1 on error.
 */
int parseInt(char *string)
{
    (void)string;

    return -1;
}
