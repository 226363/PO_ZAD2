#include <iostream>
#include "BazaTestu.hh"
#include "Statystyka.hh"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"
using namespace std;




int main(int argc, char **argv)
{
 /*LZespolona l;
 WyrazenieZesp W;

 for(int i=0; i<100; i++){
  cout<<"PODAJ WYRAZENIE:  ";
  Wczytaj(W);
  cout << endl << "WCZYTANO: ";
  Wyswietl(W);
  cout << endl << "WYNIK: ";
  l = Oblicz(W);
  //cout << l;
  Wyswietl(l);
  cout << endl << endl;
}*/

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
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  LZespolona AnsUs;
  LZespolona TmpResult;
  Statystyka statistic; statistic.right=0; statistic.mistake=0;

  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
    cout << ":?   Podaj wynik operacji: ";
    Wyswietl(WyrZ_PytanieTestowe);
    TmpResult=Oblicz(WyrZ_PytanieTestowe);
    cout <<" =  \n Twoja odpowiedz: ";
    Czytaj(AnsUs);
    Wyswietl(AnsUs);
    Wyswietl(TmpResult);
    if (Compare(TmpResult, AnsUs)==true) {statistic.right++; cout << "Odpowiedz poprawna"<<endl;}
    else {statistic.mistake++;cout<<"Odpowiedz bledna"<<endl;  }//nie wiem dlaczego nie dzialaja funkcje do tego
  }


  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;
  ShowStatystyka(statistic);

return 0;
}
