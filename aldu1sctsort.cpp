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


int swap(int a, int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
  return a ,b;
}

//! auf jedenfall muss eigentlich arr[minMarker]/arr[maxMarker] gemacht werden um zu swapn
int selectSort(int arr[], int size){
  int minMarker, maxMarker; 
  int temp = arr[0];
  int next = 1;
  
    for(int i=0; i<size; i++){      //? for schleife zum suchen des max
    if(arr[i]>=temp){
      temp = arr[i];
      maxMarker = temp;
    }
  }
  cout << maxMarker << "MAXMARKER!" << endl;
  temp = 111;

  for(int i=0; i<size; i++){     //? for schleife zum suchen des min
    if(arr[i]<=temp){             
      temp = arr[i];
      minMarker = temp;
    }
  }
    cout << minMarker << "MINMARKER!" << endl;
    return 0;
}


int main(void){
  int groesse=10;                 //? int groesse als globale variable initialisieren und anschließend durch übergabe in der conole integer festlegen (in der main)
  int liste[groesse];
  srand(time(NULL));              //? Nicht vergessen, sonst sind die Zahlen nicht randm!

  for (int i=0; i<groesse; i++){
    liste[i] = rand() % 101;
    cout << liste[i] << endl;
  }

  selectSort(liste, groesse);
  cout << "Fertig";
  return 0;
}