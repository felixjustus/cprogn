#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//typedef int MAX = 50;
/*
  TODO-selectionsort mit arrays realisieren
  TODO-größe anpassbar an input
  TODO-modular/klassen
  TODO-zahlen per eingabe in die console übergeben
  TODO-rekursiv
*/





int findMin(){                    //? function(int array[], int groesse)   <- array übergeben
  int minMarker;
  
  for(int i=0; i<groesse; i++){
    liste[i]
  }
}

int main(void){
  int groesse=10;                 //? int groesse als globale variable initialisieren und anschließend durch übergabe in der conole integer festlegen (in der main)
  int liste[groesse];
  srand(time(NULL));              //? Nicht vergessen, sonst sind die Zahlen nicht randm!

  for (int i=0; i<groesse; i++){
    liste[i] = rand() % 101;
    cout << liste[i] << endl;
  }
  cout << "Fertig";
  return 0;
}