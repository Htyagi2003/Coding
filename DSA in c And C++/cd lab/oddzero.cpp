#include<bits/stdc++.h>
using namespace std;
 int main(){
    //odd number of zeroes;
    string s;
    cout<<"enter only 0 1 string"<<endl;
    cin>>s;
    int zero=count(s.begin(),s.end(),'0');
    if(zero&1){
        cout<<"Accepted"<<endl;
    }
    else{
        cout<<"Not Accepted"<<endl;
    }
    char state='p';
    for(auto it:s){
        if(it=='0' and state=='p'){
            state='q';
        }
        else if(it=='0' and state=='q'){
            state='p';
        }
        else{
            continue;
        }

    }
    if(state=='q'){
        cout<<"Odd Number Of Zeroes"<<endl;
    }
    else{
       cout<<"Even Number of Zeroes"<<endl; 
    }
    return 0;


 }