/////////////////////////////////////////////////
///////////////// StringMerge ///////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include<iostream>
#include <cstring>

using namespace std;

#define T_SIZE 1001

char* string_merge(char *x, char *y){

}

int main(){
  int t,n;
  char S1[T_SIZE], S2[T_SIZE], *S;

  cin >> t; /* wczytaj liczb� test�w */
  cin.getline(S1,T_SIZE);
  while(t){
    cin.getline(S1,T_SIZE,' ');
    cin.getline(S2,T_SIZE);
    S=string_merge(S1,S2);
    cout << S << endl;
    delete[] S;
    t--;
  }
  return 0;
}
