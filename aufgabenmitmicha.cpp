//! <16:18:02>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
//#include "pmmp.h"
using namespace std;


//? Aufgabe 1
int main(void){
  cout << "\n \n ----->WOOOW<----- \nDieses ist ein Scheiss-Programm!\n";
  cout << "Und es ist ganz allein(noch)." << " -> Schau mal Micha! Noch ein umbruch! (mit endl;)" << endl;
  cout << "---->Magikk!!<----\n\n\n" << endl;

//? Augabe 2
  cout << "Jetzt werden deine Angaben überprüft. Bitte einzeln angeben!\nZuerst deinen Namen bitte:" << endl;

/*
string line;
getline(cin, line);  // get the entire line LINW

cout << line << endl;

char * tab2 = new char [line.length()+1];
strcpy (tab2, line.c_str());

for (int i=0; i<line.length(); i++){
  cout << line[i] << endl;
}

********
// parse each string from the line //! oben hat das letztesn geklappt um das line auszugeben
stringstream ss;

for (int i=0; stream.good(); i++) {
  stream >> input[i];
}
*/
cout << "\n\n--Jetzt wird mit Pointern sachen ausgegeben--\n\n\n";

/*
int pint = 5;
char pchar = 'A';
string pstring = "klappts?";
char charstring[] = "klappt";
*/

  int pint = 5;
  char pchar = 'A';
  string pstring = "klappts?";
  char charstring[] = "klappt";

  int *p, *o, *i, *u;
  p = &pint;
  cout << pint << " " << pchar << " " << pstring << charstring << endl;
  cout << &pint << " =&pint" << endl;
  cout << p << " =p\n\n";

  class Anschrift{
   public:
   int alter, hausnummer;
   int telnummer;
   string name;
   string mail;
   //char sternzeichen[];
   string job;
  };



  int array[] = {1,2,3,4,5,6,7,8};

  Anschrift Felix;
  Felix.alter = 24;
  Felix.hausnummer = 20;

  for(int i=0; i<sizeof(array); i++){
    cout << array[i];
  }
  cout << "Name bitte für Eingabe\n";
  Anschrift eingabe;
  cin >> eingabe.alter;       //? von der console in die classe Anschrift rein :D
  cout << "\n\nAlter bitte:" << endl;
  cin >> eingabe.alter;
//! terminal schließt nach einmaliger eingabe

/*
  int gemeinsamesAlter(void){
    return Felix.alter + eingabe.alter;
  cout << gemeinsamesAlter();
  }*/




}

