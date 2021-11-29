// List.h
// Specification file for the List class.
#ifndef LIST_H
#define LIST_H

#include <cassert>

template<class T>
class List
{
public:
   List(int);           // Constructor
   ~List();             // Destructor
   List(const List<T>&);   // Copy constructor
   List<T>& operator=(const List<T>&);   // Overloaded assignment operator
   int& operator[](const int&);    // Overloaded [] operator
   void add(int);       // add element to array
   
   // issue could also be happening here
   int get(int) const;  // returns element at given index
   int size();          // returns number of elements in array
private:
    // issue is happening here I thinkg
    int *list;           // pointer to the array
   int capacity;        // capacity of array
   int numElements;     // number of elements in array
   void resize();       // called to resize array when full
};

#include "List.cpp"

#endif
