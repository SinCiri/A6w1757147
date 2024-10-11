#include "Stack.h"
 template <class T>

//TODO

T Stack<T>::peek(){
  //if stack is not empty, return a copy of the top element
  // otherwise throw an exception and exit
  T temp = this->front->data;

  if (!this->empty()) {
    return temp;
  }
  else {
    throw std::string("stack is empty");
  }

 
}
//TODO
 template <class T>
T Stack<T>::  pop(){
  //if Stack is empty throw an exception
  //Otherwise return a copy of the top element
  // and remove it from the stack
  //modifies
  if (this->empty()) {
    throw std::string("stack is empty");
  }
  ListNode<T>* tempNode = this->front;
  T tempData = this->front->data;
  this->front = this->front->next;
  delete tempNode;
  return tempData;
  
  
}
//TODO

 template <class T>
  void Stack<T>::  push(T e){
 // Add the element e to the top of the stack
  ListNode<T>* tempNode = new ListNode<T>(e, nullptr);
  if (this->front == nullptr) {
    this->front = tempNode;
    return;
  }
  else {
    tempNode->next = this->front;
    this->front = tempNode;
    return;
  }
}

