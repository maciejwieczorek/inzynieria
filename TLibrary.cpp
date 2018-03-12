/**
 * Project Untitled
 */


#include "TLibrary.h"

/**
 * TLibrary implementation
 */


/**
 * @param libName
 */
void TLibrary::TLibrary(string libName) {

}

void TLibrary::TLibrary() {

}

/**
 * @return void
 */
void TLibrary::printData() {
    return;
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