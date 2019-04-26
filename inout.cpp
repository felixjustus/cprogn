#include <iostream>
#include <time.h>
using namespace std;

int main(void){
  char y,n,antwort;
  cout << "Willst du nochmal? (y/n)" << endl;
  cin >> antwort;
  
  switch(antwort){
  case 0: antwort = 'y'; cout << "NOCHMAAL\n"; break;
  case 1: antwort = 'n'; cout << "Echt nicht?\n"; break;
  default : cout << "Bitte benutz nur y/n KLEINGESCHRIEBEN!\n";
  }
  
}