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
            cout<<"@";
            k++;

        }
        int b=i-1;

        while(b>=1)
        {
            cout<<"@";
            b--;
        }
        cout<<endl;
        i=i+1;
    }


}

