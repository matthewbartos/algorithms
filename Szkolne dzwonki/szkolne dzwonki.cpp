/////////////////////////////////////////////////
/////////////// Szkolne dzwonki//////////////////
/////////////////////////////////////////////////
/////////////// Mateusz Bartos //////////////////
//////// http://mbartos.lo3.edu.pl/site /////////
//////////////////// 2012 ///////////////////////
/////////////////////////////////////////////////


#include<iostream>
#include<sstream>

using namespace std;

void getTime (int m){
    int h;
    h = m / 60;
    m = m-(60*h);

    if(h<10){
        ostringstream lolz;
        lolz << h;
        string output = lolz.str();
        cout<<"0"<<output;
    }else{
        ostringstream lolz;
        lolz << h;
        string output = lolz.str();
        cout<<output;
    }

    cout<<":";

    if(m<10){
        ostringstream lolz2;
        lolz2 << m;
        string output2 = lolz2.str();
        cout<<"0"<<output2;
    }else{
        ostringstream lolz2;
        lolz2 << m;
        string output2 = lolz2.str();
        cout<<output2;
    }
}

int createTime(int h, int m){
    return ((h*60) + m);
}


int main(){
    string str,strH,strM;
    int h,m;

    for(int k=0;k<1;k++){
        cin>>str;
        strH += str[0];
        strH += str[1];
        strM += str[3];
        strM += str[4];

        istringstream iss(strH);
        iss >> h;

        istringstream iss2(strM);
        iss2 >> m;

        int t;
        int time[1001];
        int j=0;
        for(j=0;j<3;j++){
            cin>>t;
            time[j]=t;
        }

        cout<<str<<",";
        int temp;
        temp = createTime(h,m);
        for(int i=0;i<j;i++){
            temp += 45;
            getTime(temp);
            cout<<",";
            temp += time[i];
            if(i==(j-1)){
                getTime(temp);

            }else{
                getTime(temp);
                cout<<",";
            }
        }

    }

    return 0;
}
