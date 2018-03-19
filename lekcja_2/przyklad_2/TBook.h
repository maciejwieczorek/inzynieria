/**
 * Project Untitled
 */


#ifndef _TBOOK_H
#define _TBOOK_H
#include <iostream>
#include <string>

class TBook {
public: 
    string bookTitle;
    string shelfMark;
    
    /**
     * @param name
     */
    void setTitle(string name);
    
    string getTitle();
    
    /**
     * @param mark
     */
    void setShelfMark(string mark);
    
    string getShelfMark();
    
    TBook();
    
    ~Tbook();
};

#endif //_TBOOK_H