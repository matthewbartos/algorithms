/////////////////////////////////////////////////
///////////////// Faktoryzacja //////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include<iostream>
#include<math.h>
#include<stdlib.h>


using namespace std;




int main(){
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++){
       long long int n;
       cin>>n;
       int j=2;
       long long int m = n;
       if(n==1){
           cout<<n<<"\n";
           continue;
       }
       while(j<=m){
        while(!(n%j)){
            n /= j;
            if(n==1) cout << j;
            if(n!=1) cout << j << "*";
       }

       if (n == 1) break;
       j++;
      }

     if (n > 1) cout << n;
     cout<<"\n";
        }



    return 0;

}
