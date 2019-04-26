#include <iostream>
#include <time.h>
using namespace std;

//TODO rekursiv? weiter()


int main(void){
  char y,n,antwort;
  cout << "Willst du nochmal? (y/n)" << endl;
  cin >> antwort;
  
  //TODO if != Y/N



while(antwort != n){                      //? komisch warum erkennt der kein char.... immernoch...
  if(antwort != 'y' || antwort != 'n'){
    cout << "Bitte nur y/n KLEINGESCHRIBEN benutzen! \n";

  } else {
    if (antwort == 'y'){
      cout << "Und nochmaal!\n";
    } else {
     cout << "Ok tschau!\n"; 
    }
}


  //? switch mit ner char abfrage geht irgendwie nicht..
/*  switch(antwort){
  case 0: antwort = 'y'; cout << "NOCHMAAL\n"; break;
  case 1: antwort = 'n'; cout << "Echt nicht?\n"; break;
  default : cout << "Bitte benutz nur y/n KLEINGESCHRIEBEN!\n";
  }
*/
  
}}