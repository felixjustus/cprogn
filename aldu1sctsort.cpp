#include <iostream>
using namespace std;
//typedef int MAX = 50;
/*
TODO-selectionsort mit arrays realisieren
TODO-größe anpassbar an input
TODO-modular/klassen
TODO-zahlen per eingabe in die console übergeben
TODO-rekursiv
*/

int main(void){
  int groesse;
  int liste[groesse];

  groesse = 10;

  
  //! while (liste[groesse] =! '/0'){ so hätte ich es gern gelöst , aber '/0' ist nur für chars...
  for (int i=0; i<groesse; i++){
    liste[i] = rand() % 101;
    cout << liste[i];
  }
  cout << "Fertig";
  return 0;
}