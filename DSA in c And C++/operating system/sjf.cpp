#include<bits/stdc++.h>
using namespace std;
 int main(){
    cout<<"ENTER THE NUMBER OF BTW 0-5"<<endl;
    int n;
    cin>>n;
    vector<int>AT;
    vector<int>BT;
    // cout<<"ENTER THE ARRIVAL TIME"<<endl;
    // for(int i=0;i<n;i++){
    //     int a;
    //     cin>>a;
    //     AT.push_back(a);
    // }
    cout<<"ENTER THE BURTS TIME"<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        BT.push_back(a); 
    }
    sort(BT.begin(),BT.end());
    vector<int>WT;
    cout<<"THE WT TIME is "<<endl;
    WT.push_back(0);
    for(int i=1;i<n;i++){
      WT.push_back(WT[i-1]+BT[i-1]);
    } 
    int sum=0;
    for(int i=0;i<n;i++){
        cout<<WT[i]<<" ";
      
        sum+=WT[i];
    }
    cout<<endl;
    cout<<"SO THE AVERAGE WAITING TIME IS :"<<sum/n<<endl;
    vector<int>TAT;
    cout<<"THE TAT TIME is "<<endl;
    for(int i=0;i<n;i++){
      TAT.push_back(WT[i]+BT[i]);
    } 
    int sum1=0;
    for(int i=0;i<n;i++){
        cout<<TAT[i]<<" ";
        sum1+=TAT[i];
    }
    cout<<endl;
    cout<<"SO THE AVERAGE TURN AROUND TIME IS :"<<sum1/n<<endl;

    return 0;
 }
