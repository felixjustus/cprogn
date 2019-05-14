//! <16:18:02>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
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
cout << &pint << endl;
cout << p;





}

