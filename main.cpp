#include <iostream>
using namespace std;
//Se desea calcular el factorial de un número entero.
//El factorial de 5 es 5 x 4 x 3 x 2 x 1
//El factorial de 6 es 6 x 5 x 4 x 3 x 2 x 1
//El factorial de 4 es 4 x 3 x 2 x 1
int main() {
    int a,x,cont,cont2;
    cont=1;
    cout << "Ingrese un numero" << endl;
    cin>> a;
    for (x=1;x<=a;x++)
    {
        cont2=cont;
        cont=cont*x;
        cout<<x<<". "<<x<<"*"<<cont2<<" = "<<cont<<endl;
    }
    cout<<"El factorial "<<a<<" es: "<<cont<<endl;
    return 0;
}
