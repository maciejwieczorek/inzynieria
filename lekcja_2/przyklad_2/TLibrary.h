/**
 * Project Untitled
 */


#ifndef _TLIBRARY_H
#define _TLIBRARY_H
#include "TBook.h"
#include <iostream>
#include <string>

class TLibrary {
public: 
    private: 
    TBook* book;
    string libraryName;
    /**
     * @param libName
     */
    void TLibrary(string libName);
    
    void TLibrary();
    
    void printData();
    
    /**
     * @param title
     * @param mark
     */
    void setData(string title, string mark);

};

#endif //_TLIBRARY_H