#include <iostream>

using namespace std;

int main()
{

    int suma , n1 , n2 ;
    n1=-4;
    n2=1;
    suma = n1 + n2 ;

    if (suma == 0 )
    {
      cout << "Resultado  = 0" << endl;
    }
    if (suma > 0)
    {
      cout << "Numero es positivo" << endl;
    }
    if(suma <0 )
    {
      cout << "Numero es Negativo" << endl;
    }

    cout <<  "Resultado "<<suma<< endl;
    return 0;
}
