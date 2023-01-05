#include "stack.h"

void createStack1301213272(stack &S){
    S.Top = 0;
}

bool isEmpty1301213272(stack S){
   return S.Top = 0;
}

bool isFull1301213272(stack S){
    return S.Top == 15;
}
void push1301213272(stack &S, infotype x){
    if (isFull1301213272(S) == false){
        S.Top = S.Top + 1;
        S.info[S.Top] = x;
    }
}

void pop1301213272(stack &S){
   infotype x;
   x = S.info[S.Top];
   S.Top--;
}
void printInfo1301213272(stack S){
    for(int i = 8; i <= S.Top; i++){
        cout << S.info[i];
    }
}
