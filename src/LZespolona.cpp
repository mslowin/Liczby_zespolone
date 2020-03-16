#include "LZespolona.hh"
#include <iostream>
#include <iomanip> 


using namespace std;


/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}
//################################################################################

/*!
 * Realizuje odejmowanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik odejmowania,
 *    Skl2 - drugi skladnik odejmowania.
 * Zwraca:
 *    Roznice dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}
//################################################################################

/*!
 * Realizuje mnozenie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik mnozenia,
 *    Skl2 - drugi skladnik mnozenia.
 * Zwraca:
 *    Iloczyn dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = (Skl1.re*Skl2.re) - (Skl1.im*Skl2.im);
  Wynik.im = (Skl1.re*Skl2.im) - (Skl1.im*Skl2.re);
  return Wynik;
}
//################################################################################

/*!
 * Realizuje dzielenie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dzielenia,
 *    Skl2 - drugi skladnik dzielenia.
 * Zwraca:
 *    Iloraz dwoch skladnikow przekazanych jako parametry.
 */
LZespolona operator / (LZespolona Skl1, LZespolona Skl2)
{
    LZespolona  Wynik;

    Wynik.re = (((Skl1.re*Skl2.re)+(Skl1.im*Skl2.im))/((Skl2.re*Skl2.re)+(Skl2.im*Skl2.im)));
    Wynik.im = (((Skl1.im*Skl2.re)-(Skl1.re*Skl2.im))/((Skl2.re*Skl2.re)+(Skl2.im*Skl2.im)));
    return Wynik;
}

//################################################################################

void Wyswietl(LZespolona Skl1)
{
    /*TU GDZIES BLAD*/
 cout << "Liczba zespolona:  (" << setprecision(1) << Skl1.re << showpos << Skl1.im << noshowpos << "i)" << setprecision(6) << endl;
}
