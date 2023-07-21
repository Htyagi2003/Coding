#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>st;
    int n;
    do
    {
        cout<<"1......push"<<endl;
        cout<<"2......pop"<<endl;
        cout<<"3......front and back"<<endl;
        cout<<"4......isempty"<<endl;
        cout<<"5......size"<<endl;
        cout<<"6......exit"<<endl;
        cout<<"Enter Your choice:"<<endl;
        cin>>n;
        switch (n){
            case 1:
            cout<<"enter the element to push"<<endl;
            int b;
            cin>>b;
            st.push(b);
            break;
            case 2:
            cout<<"the poped element"<<endl;
            st.pop();
            break;
            case 3:
            cout<<"the front and back of the queue"<<endl;
            cout<<st.front()<<" and "<<st.back()<<endl;
            break;
            case 4:
            if(st.empty()){
                cout<<"empty"<<endl;
            }
            else{
                cout<<"not"<<endl;
            }
            break;
            case 5:
            cout<<"size of queue=="<<st.size()<<endl;
            break;
            case 6:
            break;
            default:
            cout<<"enter the valid choice"<<endl;
        }

        }
    while (n!=6);

    
}