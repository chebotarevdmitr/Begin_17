#include <iostream>

using namespace std;

int main(int argc, char** argv) {
 printf("  MULTIPLICATION TABLE\n");

  for(int i=1;i<=10;i++) {
  	 for(int j=1;j<=10;j++) {
  	 	cout<< "   "<<i<<"*"<<j<<"="<<i*j<<endl;
     }
     cout<<"\n\n";
  }


  system("pause>0");
}