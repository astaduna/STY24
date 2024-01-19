#include "countchr.h"

int countchr(char *string, char c) {
	int count = 0;

	while (*string != '\0') {  //while the first letter is not zero,, then do something
	    if (*string == c) {
			count++;
		}
		string++;     //Make sure we increment the pointer
	}
	return count;
}