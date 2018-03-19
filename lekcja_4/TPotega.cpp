/**
 * Project Untitled
 */


#include "TPotega.h"

/**
 * TPotega implementation
 */


/**
 * @param n
 * @param m
 * @return double
 */
double TPotega::potega(int n, int m) {
    if(m == 0 )
    	return 1;
    else
    	return n * potega(n,m-1);
}