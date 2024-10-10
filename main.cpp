#include <iostream>
#include <sstream>

#include "Stackcpp.h"

//TODO 
//Requires: input expression
//Effects: checks( ) parenthesis matching. Multiple pairs ok, nested pair checking not need eg. (())
//Modifies: nothing
bool checkMatch(std::string expression){
  //save the expression in a stream
  std::istringstream input(expression);
  //create a storage stack
  Stack<char> store;
  
  char ch;
  //read from stream character by character
  while( input>>ch){
  
  // if the character is '(' push it onto the stack
  
  // if character is ')' remove the matching '(' from the stack. If stack is empty return false
  //if not empty and '(' not found on the stack, return false
  
  // if parenthesis are matched, then stack is empty
 
}
 return store.empty();
}
//GIVEN
//return an integer that corresponds to the OPERATOR

//higher precedence gives higher value
//same level of precedence gives the same value
int precedence(char oper){
  if (oper=='+'|| oper== '-')
     return 1;
   if (oper=='*'|| oper== '/')
   return 2;
  return 0;
}
//GIVEN
//check if character is a number
bool isOperand(char ch){
  return (ch>='0'&&ch<='9');
}

//TODO
//Requires the accurately convered expression as a post fix string
//Effects: computes and evaluates the postfix expression by performing Stack
//operations, Uses multiple stacks
//Modifies nothing
int evaluate(std::string postfix){
  std::istringstream input(postfix);
  char ch;
  int data=0;
  Stack<int> result;


  //store the expression on the stack

    //since this reverses the postfi expression, store in another stack to 
    //reverse the stack
  
   //if operand, store numeric value on result stack
 // use int(ch)-48 to convert char to integer value
  // if its an operator, pop two operands from result stack
    // apply the operator on them and store the resulting value in result stack
     
    // GIVEN
    //switch (ch){
     // case '*': result.push(one*two); break;
     // case '/':result.push(one/two);break;
     // case '+': result.push(one+two); break;
      //case '-': result.push(one-two); break;
     // default: break;
     
    

    
  // the final value is on the top of the stack, return this
  return result.pop();
  
}
//GIVEN check precedence level of two operators
bool checkPrec(char oper1, char oper2){
  if (precedence(oper1)>precedence(oper2))
    return true;
  else return false;
}
//TODO
std::string convertToPostfix(std::string expression){
 
  Stack<char> opstack;
  if (expression.compare("") ==0) return "";
  std::istringstream input(expression);
  std::string postfix="";
  char ch;
  
  while (input>>ch){
  // if characher is operand then append to postfix expression
  // if character is '('
  // generate the post fix equivalent of the subexpression
  //if operator, push it on the operator stack, keeping precedence in mind // if character greater in precedence than the operator on top of the stack
  // copy back operators appropriately to the postfix string a
  }
  return postfix;
}
//GIVEN
void convertAndCalculate(std:: string expression){
  std::string postfix="";
  int result=0;
  std::cout<<"Expression= "<<expression<<"\n";
 if (checkMatch(expression)){
    postfix =convertToPostfix(expression);
    std::cout<<"Post Fix Expression= "<<postfix+"\n";
 if (postfix.compare("")!=0) 
  result =evaluate(postfix);
    std::cout<<"Result of evaluation = "<<result<<"\n\n";
  }
  
else std::cout<<"Parenthesis mismatch \n\n";


}
int main() { 
   std::string expression1 ="1 + (3 * 5) / (6 - 4)";
   std::string expression2 ="(1 + 3 )* 5 / (6 - 4)+2";
   std::string expression3 ="1 + (3 * 5) / 6 - 4)";
   std::string expression4 ="1 + (3 * 5() / (6 - 4)";
   convertAndCalculate(expression1);
   convertAndCalculate(expression2);
   convertAndCalculate(expression3);
   convertAndCalculate(expression4);
  
}
  

  

