#include <iostream>
using namespace std; 

//TODO using namespace std macht dass std::cout zu -> cout 
/*
!Außerdem!
!kann man sowas wie 
!   cout << "bla"
!        << "bla"
!        << "bla";
statt
!
!   std::cout << "blaaaa";
!   std::cout << "blaaaa";
!   std::cout << "blaaaa";
!   std::cout << "blaaaa"; is this added in the new file?
*/

int main(void){
  int i;
 
  for(i=0; i<2; i++){
    std::cout << "Hello World!\t";
  }

  cin.sync();
  cin.get();
  return 0;
}
