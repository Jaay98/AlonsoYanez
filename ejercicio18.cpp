#include <iostream>
//#include <stdlib.h >
//#include < conio.h >


using namespace std;

int main()
{

  int numeros [35] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35};
  int suma = 0;


  for(int i=0;i<35;i++)
  {
      suma = suma + numeros[i];
  }
  cout << "La suma es :" <<suma<<endl;
  //getch();
  return 0 ;
}
