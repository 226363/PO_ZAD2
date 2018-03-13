#ifndef LSTATYSTYKA_HH
#define STATYSTYKA_HH

#include <iostream>

struct Statystyka{
  int right; //dobre odpowiedzi
  int mistake; //bledne odpowiedzi
};

void ShowStatystyka(Statystyka stat);
Statystyka add (Statystyka statistic);
Statystyka substract (Statystyka statistic);

#endif
