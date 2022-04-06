#include<iostream>
using namespace std;
/* void define en C++ el concepto de no existencia o no atribución
 de un tipo en una variable o declaración. Es decir, 
 una función declarada como void no devolverá ningún valor.*/
void cambiar(int &a, int &b)
{
    int Olda = a;
    a = a + b;
    if (Olda > b)
    {
        b = Olda - b;
    }
    else{
        b = b -Olda;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    int *aPointer = &a;
    int *bPointer = &b;
    cambiar(a, b);
    cout << a << "\n" << b;
}