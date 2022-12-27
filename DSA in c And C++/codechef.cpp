#include <iostream>
using namespace std;
int count(int x,int y){
    int c =0;
    if(x>y){
        while(x>y){
            c++;
            x--;
            
        }
        // cout<<c<<endl;
        return c;
    }
    else{
        while(x<y){
            c++;
            x++;
        }
        return c;
    }
    
}

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t>0){
	int x,y;
	cin>>x>>y;
	int n=count(x,y);
    cout<<n<<endl;
    t--;
    }
	return 0;
}
