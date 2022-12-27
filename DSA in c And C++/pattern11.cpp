
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
        while(j<=i){
            char st=k+n-i;
            cout<<st;
            j=j+1;
            k=k+1;


        }
        
    cout <<endl;
    i++;
}
}