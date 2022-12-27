
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        char k='A';
        while(j<=n){
            char st=k+i-1;
            cout<<st;
            j=j+1;
            k=k+1;
        }
        
    cout <<endl;
    i++;
}
}