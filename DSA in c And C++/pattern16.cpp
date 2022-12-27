#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=(n-i)){
            cout<<" ";
            j=j+1;
        }
        int k=1;
        while(k<=i){
            cout<<"*";
            k++;

        }
        int b=i-1;

        while(b>=1)
        {
            cout<<"*";
            b--;
        } krna h abhi hua nhi h yr 
        
        // int v=1;
        // while(v<=n-1)
        // {
        //     int g=1;
        //     while(g<=i){
        //         cout<<" ";
        //         g++;}
        //         int h=1;
        //         while(h<=n-i){
        //             cout<<"*";
        //             h++;
        //         }
        
        // }
        cout<<endl;
        i=i+1;
    }


}

