#include <bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin >> n;
    vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
    int pdt = 1;
    int x = INT_MAX;
    for(int i=0;i<n;i++)
    {
        x = min(x, v[i]);
    }
    int f = 0;
    for(int i=0;i<n;i++)
    {
        if (v[i] == x && f == 0)
        {
            v[i]++;
            f = 1;
        }
        pdt *= v[i];
    }
    cout << pdt << endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--){
        code();
    }
        return 0;
}