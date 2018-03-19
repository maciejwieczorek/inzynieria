/**
 * Project Untitled
 */


#ifndef _TBERNOULLI_H
#define _TBERNOULLI_H

class TBernoulli {
public: 
    
    /**
     * @param k
     * @param n
     * @param p
     */
    void bernoulli(int k, int n, double p);
private: 
    double p;
    double q;
    TPotega *pPotega;
    TPrawdopodobienstwo *pPrawdopodobienstwo;
    
    void Bernoulli();
    
    void Bernoulli();
};

#endif //_TBERNOULLI_H