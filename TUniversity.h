/**
 * Project Untitled
 */


#ifndef _TUNIVERSITY_H
#define _TUNIVERSITY_H

class TUniversity {

private: 
    TStudent student;
    string name;

 public: 
    
    /**
     * @param univName
     */
    void TUniversity(string univName);
    
    void printData();
    
    /**
     * @param name
     * @param age
     */
    void setData(string name, int age);

};

#endif //_TUNIVERSITY_H