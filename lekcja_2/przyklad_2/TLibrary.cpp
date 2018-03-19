/**
 * Project Untitled
 */


#include "TLibrary.h"
#include <iostream>

using namespace std;
/**
 * TLibrary implementation
 */


/**
 * @param libName
 */
TLibrary::TLibrary(string libName) {

}

TLibrary::TLibrary() {

}

/**
 * @return void
 */
void TLibrary::printData() {
    cout << book->getTitle() << endl;
	cout << book->getShelfMark() <<endl;
}

/**
 * @param title
 * @param mark
 * @return void
 */
void TLibrary::setData(string title, string mark) {
    book->setTitle(title);
    book->setShelMark(mark);
}