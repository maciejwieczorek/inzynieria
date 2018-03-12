/**
 * Project Untitled
 */


#ifndef _TSTUDENT_H
#define _TSTUDENT_H

class TStudent {

private: 
    string studentName;
    int studentAge;

public: 
    
    /**
     * @param name
     */
    void setName(string name);
    
    string getName();
    
    /**
     * @param age
     */
    void setAge(int age);
    
    int getAge();

};

#endif //_TSTUDENT_H