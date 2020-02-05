#include <iostream>

using namespace std;

int main()
{
    int Respuesta=0;
    int array [1000] = {0};

     for (int i = 0 ; i <1000 ; i++)
    {
        array [i] =   i ;
    }


    for (int i = 0 ; i <1000 ; i++)
    {
        Respuesta = Respuesta +  array [i];
    }

    cout<< "Respuesta es =" <<Respuesta <<endl;
    return 0;

}
