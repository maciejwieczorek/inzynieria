/**
 * Project Untitled
 */


#include "TUniversity.h"

/**
 * TUniversity implementation
 */


/**
 * @param univName
 */
void TUniversity::TUniversity(string univName) {
	name = univName;
	cout << name << endl;
}

/**
 * @return void
 */
void TUniversity::printData() {
    cout << student.getName();
    cout <<student.getAge();
}

/**
 * @param name
 * @param age
 * @return void
 */
void TUniversity::setData(string name, int age) {
    student.setName(name);
    student.setAge(age);
}