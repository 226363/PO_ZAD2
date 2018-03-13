#include "WyrazenieZesp.hh"

void Wczytaj(WyrazenieZesp &W){
  LZespolona z1, z2;
  Operator o1;
  char tmp;

  Czytaj(z1);

  cin >> tmp; // operator
  if(tmp=='+') o1 = Op_Dodaj;
  else if(tmp=='*') o1 = Op_Mnoz;
  else if(tmp=='-') o1 = Op_Odejmij;
  else if(tmp=='/') o1 = Op_Dziel;
  else cout <<"TRAGEDIA!!!"<<endl;

  Czytaj(z2);

  W.Arg1 = z1;
  W.Arg2 = z2;
  W.Op = o1;
}


void Wyswietl(WyrazenieZesp  WyrZ){
  Wyswietl(WyrZ.Arg1);
  if(WyrZ.Op==Op_Dodaj) cout << " + ";
  if(WyrZ.Op==Op_Mnoz) cout << " * ";
  if(WyrZ.Op==Op_Odejmij) cout << " - ";
  if(WyrZ.Op==Op_Dziel) cout << " / ";
  Wyswietl(WyrZ.Arg2);
}


LZespolona Oblicz(WyrazenieZesp  WyrZ){
  LZespolona Wynik;
  if(WyrZ.Op==Op_Dodaj) Wynik = WyrZ.Arg1 + WyrZ.Arg2;
  if(WyrZ.Op==Op_Mnoz) Wynik = WyrZ.Arg1 * WyrZ.Arg2;
  if(WyrZ.Op==Op_Odejmij) Wynik = WyrZ.Arg1 - WyrZ.Arg2;
  if(WyrZ.Op==Op_Dziel) Wynik = WyrZ.Arg1 / WyrZ.Arg2;
  return Wynik;
}

/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
