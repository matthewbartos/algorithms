/////////////////////////////////////////////////
/////////////////// Gildie //////////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include <iostream>
#include <vector>

using namespace std;

    vector<vector<int> > graf;
    int visited[200001];
    int gildie[200001];
    bool tak = true;


void DFS_Visit(int v, int gildia){
    visited[v] = 1;
    gildie[v] = gildia;
    int nowa_gildia;

    if(gildia == 1)
        nowa_gildia = 2;
    else
        nowa_gildia = 1;

    // sprawdzamy liste sasiadow
    if(graf[v].size() == 0){
        tak = false;
    }//if

    for(int i = 0; i < graf[v].size(); i++){
        int sasiad = graf[v][i];


        if(visited[sasiad] == 0){
            DFS_Visit(sasiad, nowa_gildia);
        }//if
    }//for

    visited[v] = 2; //przetworzony

}


void DFS(){
    for(int i = 1; i < graf.size(); i++){
        if(visited[i] == 0){
            DFS_Visit(i,1);
        }//if
    }//for
}



int main(){
    ios_base::sync_with_stdio(0);
    int n,m,a,b;

    cin >> n >> m;

    graf.resize(n+1);

    for(int i = 1; i <= m; i++){
        cin>> a >> b;
        graf[a].push_back(b);
        graf[b].push_back(a);
    }//for

    DFS();

    if(tak){
        cout<<"TAK\n";
        for(int i = 1; i <= m; i++){
            if(gildie[i] == 1)
                cout<< "K\n";
            else
                cout<< "S\n";
        }//for
    }else{
        cout<<"NIE\n";
    }

    return 0;
}
