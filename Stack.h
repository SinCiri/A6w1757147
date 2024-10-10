
#include "LinkedListcpp.h"
//So Stack inherits from LinkedList and has access to all LinkedList Methods
// Stack IS A LinkedList
template <class T> class Stack: public LinkedList<T>{
  public: T peek();
  public: T pop();
  public: void push(T e);

  
};