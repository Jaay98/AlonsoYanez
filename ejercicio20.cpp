#include <iostream>

using namespace std;

int main()
{
    int Respuesta=0;
    int array [2000] = {0};

     for (int i = 0 ; i <2000 ; i++)
    {
        array [i] =   i ;
    }


    for (int i = 0 ; i <2000 ; i++)
    {
        if(array[i] % 2 ==0 )
        {
            Respuesta = Respuesta +  array [i];
        }

    }

    cout<< "Respuesta es =" <<Respuesta <<endl;
    return 0;

}
