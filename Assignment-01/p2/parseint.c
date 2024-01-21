#include "parseint.h"

//astaj22
//gudlaugv22

/*
 * Returns the value of c or -1 on error
 */
int convertDecimalDigit(char c) {
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
int parseInt(char *string) {
    if (*string == '\0') {
        return -1;
    }

    int result = 0;

//Check if the sting is octal
    if (*string == '0') {
        string ++;

        while (*string >= '0' && *string <= '7') {
            int decimalValue = convertDecimalDigit(*string);
            if (decimalValue == -1) {
                return -1;
            }

            result = result * 8 + decimalValue;
            string++;
        }
    }

//Check if the string is decimal
    else if (*string >= '0' && *string <= '9') {
        while (*string >= '0' && *string <= '9') {
            int decimalValue = convertDecimalDigit(*string);
            if (decimalValue == -1) {
                return -1;
            }

            result = result * 10 + decimalValue;
            string++;
        }
    }
    
    else {
        return -1;
    }

    return result;
}
