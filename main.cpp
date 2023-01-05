#include "stack.h"

using namespace std;

int main()
{
    stack S;
    infotype X;
    createStack1301213272(S);

    for(int i = 0; i < 11; i++){
        cin >> X;
        push1301213272(S,X);
    }
    cout << "sebelum di POP" << endl;
    printInfo1301213272(S);

    cout << endl;
    cout << "Sesudah di POP" << endl;
    pop1301213272(S);
    return 0;
}
