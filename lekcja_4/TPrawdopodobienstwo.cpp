/**
 * Project Untitled
 */


#include "TPrawdopodobienstwo.h"

/**
 * TPrawdopodobienstwo implementation
 */


/**
 * @param n
 * @param k
 * @return double
 */
double TPrawdopodobienstwo::prawdopodobienstwo(int n, int k) {
    N = n - k;
	int Nta = 1;
	if(k >= N) {
		for(int i = k+1; i <= n; i++)
			Nta *= i;
		return (Nta/pSilnia->silnia(n - k));
	}
	else {
		for(int i = N+1; i <= n; i++)
			Nta *= i;
		return (Nta / pSilnia->silnia(k));
		}
}

void TPrawdopodobienstwo::Prawdopodobienstwo() {
	pSilnia = new TSilnia
}

void TPrawdopodobienstwo::Prawdopodobienstwo() {
	delete TSilnia
}