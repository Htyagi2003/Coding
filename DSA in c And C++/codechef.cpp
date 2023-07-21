#include <bits/stdc++.h>
using namespace std;
bool isswap(int a,int b){
    return a<b;
    //jaisa chaie vaisa kr likh lenge
}
void select(vector<int>&v,int n){
    for(int i=0;i<n;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(isswap(v[min_ind],v[j])){
                min_ind=j;
            }
        }
        swap(v[min_ind],v[i]);

    }
}
int main() {
	// your code goes here
	int n;
    vector<int>v;
    cin>>n;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vp.push_back({a,b});
        
    }
    // select(v,n);
    sort(vp.begin(),vp.end());
    //sort(v.begin(),v.end(),isswap);
        for(auto it:vp){
            cout<<it.first<<" "<<it.second<<" "<<endl;
        }

	return 0;
}
