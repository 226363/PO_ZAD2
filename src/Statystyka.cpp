#include "Statystyka.hh"

void ShowStatystyka(Statystyka stat){
  double percent;
  int howMany;
  std::cout << "Ilosc dobrych odpowiedzi: " <<stat.right <<'\n';
  std::cout << "Ilosc blednych odpowiedzi: " <<stat.mistake <<'\n';
  howMany=stat.right + stat.mistake;
  if (howMany == 0)
    std::cout << "Brak odpowiedzi" << '\n';
  else {
    percent = (double)stat.right / (double)howMany * 100;
    std::cout << "Wynik procentowy poprawnych odpowiedzi: "<<percent<<"%"<< '\n'; //tu moze byc blad
  }
}

Statystyka add(Statystyka statistic){
  statistic.right++;
  return statistic;
}
Statystyka substract(Statystyka statistic){
  statistic.mistake++;
  return statistic;
}
