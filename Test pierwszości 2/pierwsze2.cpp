/////////////////////////////////////////////////
////////////////// Template /////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include<iostream>

using namespace std;

void sito() {
    for(int i = 0; i < n; i++){
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for( int i = 2; i*i <= MAXN; i++){
        if(isPrime[i]){
            j= i * 2;
            while(j <= n){
                isPrime[j] = false, j+= i;
            }
        }
    }
    for(int i = 0; i<= n; i++)
        if(isPrime[i]) primes[np++] = i;
}

bool isPrimeSito(int n){
    if (n <2 ) return false;
    for (int i =0; (i <np) && (primes[i] * [primes[i] <= n);i++){
        if(n % primes[i] == 0) return false;
    }
    return false;
}

int main(){
    int t;
    cin>>t;

    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        if(isPrimeSito)cout<<"TAK"<<"\n"else
        cout<<"NIE";
    }
    return 0;
}
