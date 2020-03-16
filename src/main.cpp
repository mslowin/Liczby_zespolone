#include <iostream>
#include "BazaTestu.hh"

using namespace std;




int main(int argc, char **argv)
{

  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] /*np. latwy*/ << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
    cout << " Czesc rzeczywista pierwszego argumentu: ";
    cout << WyrZ_PytanieTestowe.Arg1.re << endl;
  }

  //#############################################################################
  /*Z jakiegos powodu nie wyswietla sie poprawny wynik dodawania*/
  cout<<endl;
  LZespolona Skl1, Skl2, Wynik;
  Skl1.re = 2;
  Skl1.im = 5;
  Skl2.re = 4;
  Skl2.im = 6;
  Wynik = Skl1 + Skl2;
  cout<<Wynik.re<<endl;
  cout<<Wynik.im<<endl;
  Wyswietl(Wynik);      /*wydaje mi sie ze blad moze byc w wyswietlaniu*/

  //#############################################################################
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

}
