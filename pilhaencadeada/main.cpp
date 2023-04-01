#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    pilhaenc pilha1;
    cout << pilha1.push(10) << endl;
    getchar();
    cout << pilha1.top() << endl;
    pilha1.pop();
    getchar();
    
    return 0;
}