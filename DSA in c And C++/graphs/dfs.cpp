#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of Vertex"<<endl;;
    cin>>n;
    vector<int>v[n];
    cout<<"Enter the NO. Edges"<<endl;
    int e;
    cin>>e;
    cout<<"Enter the Edges"<<endl;
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        //v[b].push_back(a);

    }
    for(int i=0;i<n;i++){
        cout<<i<<": ";
     for(auto it:v[i])
        cout<<it<<" -> ";

        cout<<endl;
    }
    vector<bool>st(6,false);
    stack<int>q;
    cout<<"Enter the source vertex"<<endl;
    int g;
    cin>>g;
    st[g]=true;
    q.push(g);
    cout<<"BFS of a Graph"<<endl;
    while(!q.empty()){
        int f=q.top();
        cout<<f<<" ";
        q.pop();
        for(auto it:v[f]){
            if(!st[it]){
                q.push(it);
                st[it]=true;
            }
        }
    }


}