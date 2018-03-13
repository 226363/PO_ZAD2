#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include <iostream>
#include <ostream>
#include <string>

using namespace std;
/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */

};

void Wyswietl(LZespolona Skl);
void Czytaj(LZespolona &Skl);
void Czytaj3razay(LZespolona &Skl);
/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

//ostream& operator << (ostream & wyjscie, LZespolona Skl);


LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona operator * (LZespolona Skl1, LZespolona Skl2);
LZespolona Sprzezenie(LZespolona Skl);
double Modul2(LZespolona Skl);
LZespolona operator / (LZespolona Skl, double numb);
LZespolona operator / (LZespolona Skl1, LZespolona Skl2);
bool Compare (LZespolona Skl1, LZespolona Skl2);
#endif
