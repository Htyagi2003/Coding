
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    map<int,string>mpp;
    mpp[1]="Ravi";
    mpp.insert({2,"HArsh"});
    mpp[1]="Gaurav";
    
    mpp.insert({3,"lavish"});
    // mpp.clear();
    // mpp.pop_back();
    for(auto it :mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    if(mpp.find(5)!=mpp.end()){
        mpp.erase(5);
    }
    else{
        cout<<"NOT FOUND"<<endl;
    }
    for(auto it :mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    //write a program to enter n string findout freq of each string lexicographical order
    int n;
    cout<<"Enter the number of the string"<<endl;
    cin>>n;
    cout<<"Enter the the strins"<<endl;
    vector<string>v;
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      v.push_back(s);
    }
    map<string,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}