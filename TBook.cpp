/**
 * Project Untitled
 */


#include "TBook.h"

/**
 * TBook implementation
 */


/**
 * @param name
 * @return void
 */
void TBook::setTitle(string name) {
    this->bookTitle = name;
}

/**
 * @return string
 */
string TBook::getTitle() {
    return bookTitle;
}

/**
 * @param mark
 * @return void
 */
void TBook::setShelfMark(string mark) {
    this-> shelMark=mark;
}

/**
 * @return string
 */
string TBook::getShelfMark() {
   {return shelfMark;
}

TBook::TBook() {
	cout << "Konstruktor klasy ";
}

TBook::~Tbook() {
	cout << "Destruktor klasy ";
}