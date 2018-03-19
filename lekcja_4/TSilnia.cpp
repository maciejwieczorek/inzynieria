/**
 * Project Untitled
 */


#include "TSilnia.h"

/**
 * TSilnia implementation
 */


/**
 * @param n
 * @return int
 */
int TSilnia::silnia(int n) {
    if(n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}