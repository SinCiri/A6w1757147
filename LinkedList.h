#include "ListNodecpp.h"

template <class T>
class LinkedList{

public: ListNode<T> * front;
int count;

public: LinkedList<T>();
public: bool empty();

public: int size();
public: void add( T  t);
public: std::string toString();
void  printList();

};