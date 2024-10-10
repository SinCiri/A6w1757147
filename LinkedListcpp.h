#include "LinkedList.h"
template <class T>
LinkedList<T>::LinkedList(){
   front = nullptr;
   count=0;
}
template <class T>
bool LinkedList<T>::empty(){
  return (front == nullptr);
}
template <class T>
int LinkedList<T>::size(){
  return count;
}
template <class T>
void LinkedList<T>::add( T  t){
  ListNode<T>* e = new ListNode<T>(t,front);
  front=e;
  count++;
}
/*
template <class T>
std::string LinkedList<T>:: toString(int i){
   return get(i).toString();
}
*/
template <class T>
void  LinkedList<T>::printList(){
  ListNode<T> * cur =front;
  while (cur!=nullptr){
    std::cout<<cur->toString()<<"\n";
    cur=cur->next;
  }

}
  