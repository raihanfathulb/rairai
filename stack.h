#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

typedef char infotype;

struct stack{
    infotype info[15];
    int Top;
};

void createStack1301213272(stack &S);
bool isEmpty1301213272(stack S);
bool isFull1301213272(stack S);
void push1301213272(stack &S, infotype x);
void pop1301213272(stack &S);
void printInfo1301213272(stack S);


#endif // STACK_H_INCLUDED
