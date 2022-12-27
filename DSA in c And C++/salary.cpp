#include<iostream>
using namespace std;
int main(){
    int bs;
    cout<<" enter the basic salary"<<endl;
    cin>>bs;
    int hra=.2*bs;
    int da=.5*bs;
    int pf=0.11*bs;
    int allow,ts;
    cout<<" enter the grade"<<endl;
    char x;
    cin>>x;
    if(x=='A'){
        allow=1700;
    }
    else if(x=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
     ts=bs+hra+da+allow-pf;
        cout<<ts<<endl;

}