#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        int k=1;
        while(j<=i){
            cout<<k+i-1;
            j=j+1;
            k=k+1;

        }
        
    cout <<endl;
    i++;
}
}