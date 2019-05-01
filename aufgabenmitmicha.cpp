//! <16:18:02>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//? Aufgabe 1
int main(void){
  cout << "\n \n ----->WOOOW<----- \nDieses ist ein Scheiss-Programm!\n";
  cout << "Und es ist ganz allein(noch)." << " -> Schau mal Micha! Noch ein umbruch! (mit endl;)" << endl;
  cout << "---->Magikk!!<----\n\n\n" << endl;

//? Augabe 2
  cout << "Jetzt werden deine Angaben überprüft. Bitte einzeln angeben!\nZuerst deinen Namen bitte:" << endl;

std::string line;
getline(std::cin, line);  // get the entire line

// parse each string from the line
std::istringstream stream(line);
for (int i=0; stream.good(); i++) {
  stream >> input[i];
}

}

