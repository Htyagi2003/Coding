#include<iostream>
using namespace std;
void largest(int a, int b, int c){
    if(a>b){
        if(a>c){
            cout<<" a is largest";
        }
    }
     if(b>c){
        if(b>a){
            cout<<" b is largest";
        }
    }
    else{
        cout<<" c is largest";
    }
}
int main(){
    int a,b,c;
    cout<<" ENTER a,b,c"<<endl;
    cin>>a>>b>>c;
    largest(a,b,c);

}