#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>
using namespace std;
//typedef int MAX = 50;

/* //! swap function geht nicht
template <class T> void swap (T& a, T& b)
{
  T c(std::move(a)); a=std::move(b); b=std::move(c);
}*/

/*
  TODO-selectionsort mit arrays realisieren
  TODO-größe anpassbar an input
  TODO-modular/klassen
  TODO-zahlen per eingabe in die console übergeben
  TODO-rekursiv
*/

/* //! ERSTMAL IGNORIEREN!
int swap(int a, int b){
  pair<int, int> retval;
  int temp;
  temp = a;
  a = b;
  b = temp;
  retval = make_pair (a, b);
  return ( pair<int,int>(a, b) );
  //return retval;
}*/


void swap(int *a, int *b){
	int x = *a;
	*a = *b;
	*b = x;
}

//! auf jedenfall muss eigentlich arr[minMarker]/arr[maxMarker] gemacht werden um zu swapn
int selectSort(int arr[], int size){
  int minMarker; 
  int temp = arr[0];
  int position = arr[0];
  int next = 1;
  
while (next <= size){

    for(int j=0; j<size; j++){
      for(int i=0; i<size; i++){     //? for schleife zum suchen des min
        if(arr[i]<=temp){             
          temp = arr[i];
          minMarker = temp;
        }
      }
      if(arr[next] < arr[position]){
        minMarker = arr[next];
      }
      next++;
      if(arr[position] != minMarker){
        //swap(arr[position], arr[minMarker]);
        //swap(position, minMarker); //! warum geht das nicht
      swap(&arr[position],&minMarker);
      }
      position++;
      next++;                        //?hier wird es out of bounce 
    }
    //cout << minMarker << "MINMARKER!" << endl;
      return 0;
  }
}

int main(void){
  int groesse=10;                 //? int groesse als globale variable initialisieren und anschließend durch übergabe in der conole integer festlegen (in der main)
  int liste[groesse];
  srand(time(NULL));              //? Nicht vergessen, sonst sind die Zahlen nicht randm!

  cout << "Unsortiertes Array:" << endl;
  for (int i=0; i<groesse; i++){
    liste[i] = rand() % 101;
    cout << liste[i] << endl;
  }

  selectSort(liste, groesse);
  cout << "Fertig" << endl;
  for (int i=0; i<groesse; i++){
    cout << liste[i] << endl;
  }
  return 0;
}