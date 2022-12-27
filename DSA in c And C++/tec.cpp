// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int c=0;
//     int b=n;
//     int rev=0;

//     while(b!=0){
//         int x=b%10;
//         rev=rev*10+x;
//         b/=10;
//     }
//     while(n!=0){
//       int r=rev%10;
//       n/=10;
//       rev/=10;
//       switch (r)
//       {
//         case 0:
//         printf("zero ");
//         break;
//         case 1:
//         printf("one ");
//         break;
//         case 2:
//         printf("two ");
//         break;
//         case 3:
//         printf("three ");
//         break;
//         case 4:
//         printf("four ");
//         break;
//         case 5:
//         printf("five ");
//         break;
//         case 6:
//         printf("six ");
//         break;
//         case 7:
//         printf("seven ");
//         break;
//         case 8:
//         printf("eight ");
//         break;
//         case 9:
//         printf("nine ");
//         break;
//       }

//     }

// }
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n;
//     cin>>n;
//     while(n--){
//         int p,f=0;
//         cin>>p;
//         for(int i=2;i<=log(p);i++){
//             if(p%i==0){
//                 cout<<"no"<<endl;
//                 f=1;
//                 break;
//             }
//         }
//         if(f==0){
//             cout<<"yes"<<endl;
//         }
//     }
//     return 0;
// }
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int l,u,c2=0;;
//     cin>>l>>u;
//     for(int i=l;i<=u;i++){
//         int c=0;
//         int r=i;
//         while(r!=0){
//             c++;
//             r/=10;
//         }
//         int b=i;
//         int s=0;
//         int h;
//         while(b!=0){
//             h=b%10;
//             s=s+pow(h,c);
//             b/=10;
//         }
//         if(s==i){
//             cout<<i<<" ";
//             c2++;
//         }

//     }
//     cout<<endl;
//     cout<<c2<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// void check(int n,int m,int k,int x){
// int c=0;
// 	    int i=1;
// 	    while(c<x){
// 	        if(i%k!=0){
// 	            c=c+n;
// 	        }
// 	        else{
// 	            c=c+n+m;
// 	        }
// 	        i++;
// 	    }
//         if((i-1)%k==0){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,m,k,x;
// 	    cin>>n>>m>>k>>x;
//         check(n,m,k,x);
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,a,b;
// 	    cin>>n>>a>>b;
// 	    int c=0;
// 	    while(n/2!=1){
// 	        n/=2;
// 	        c=c+a+b;
// 	    }
// 	    c=c+a;
// 	    cout<<c<<endl;

// 	}
// 	return 0;
// }
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int r;
//     int c=1;
//     while(n!=0){
//         r=n%10;
//         c=c*r;
// 		n/=10;
//     }
//     cout<<c<<endl;
//     return 0;
// }
// int func(int a,int n){
//     if(n==0){
// 		return 1;
// 	}
// 	else{
// 		return a*func(a,n-1);
// 	}
// }
// int main(){
// 	int n,t,a;
// 	cin>>a>>n;
// 	t=func(a,n);
// 	cout<<t<<endl;
// 	return 0;
// }
// INFIX TO POSTFIX
// A+B-C/D*F
//  #include<stdio.h>
//  #define size 25
// struct stack {
//     int data[size];
//     int top;
// }s;
// int push(int n){
//     if(s.top==size-1){
//     return 0;
//     }
//     else{
//     s.data[++s.top]=n;
//    }
// }
// int pop(){
//     if(s.top==-1){
//         return 0;
//     }
//     else{
//     return s.data[s.top--];
//     }
// }
// int show(){

// }
// int peep(){
//   return s.data[s.top];
// }
// int isempty(){
//     return s.top==-1;
// }
// int prcd(char op1,char op2){
//   if(op1=='$'||op1=='*'||op1=='/'||op1=='%'){
//     return (op2!='$');
//   }
//   else{
//     if(op2=='+'||op2=='-'){
//       return 1;
//     }
//     else{
//       return 0;
//     }
//   }
// }
// int main(){
//   s.top=-1;
//     char fix[50];
//     char post[50];
//     char x ,sy;
//     //2
//     // printf("enter size");
//     // scanf("%d",&n);
//    // printf("Enter the postfix expression");
//     gets(fix);
//     //printf("infix=%s",fix);
//     int i=0,p=0;
//     while(fix[i]!='\0'){
//      printf("%c\n",fix[i]);
//        sy=fix[i];
//       if(sy>='a'&& sy<='z'||sy>='A'&&sy<='Z'||sy>='0'&&sy<='9'){
//       post[p]=sy;
//       p++;
//       }
//       else if(isempty()){
//         push(sy);
//       }
//       else if(sy=='('){
//         push(sy);
//       }
//       else if(sy==')'){
//         while (!isempty()&&(peep()!='('))
//         {
//           sy=pop();
//           post[p++]=sy;

//         }
//         sy=pop();
//       }
//       else{
//           while (!isempty()&&(peep()!='(')&&prcd(peep(),sy)){
//            x=pop();
//            post[p++]=x;
//           }
//           push(sy);
//       }
//       i++;
//     }
//       //show(sy,post);
//       while(!isempty()){
//         sy=pop();
//         post[p++]=sy;
//         //show(sy,post)

//       }

//       post[p]='\0';
//         printf("\npost=%s",post);

// }
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//   int n;
//   cin >> n;
//   int sum = 0;
//   int a = n;
//   for (int i = 1; i <= n / 2; i++)
//   {
//     if (a % i == 0)
//     {
//       sum += i;
//     }
//   }
//   if (sum == n)
//   {
//     cout << "Yes" << endl;
//   }
//   else
//   {
//     cout << "No" << endl;
//   }
//   return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     int arr[3];
//     for (int i=0;i<3;i++){
//       cin>>arr[i];
//     }
//     sort(arr,arr+3);
//     cout<<arr[1]<<endl;
//   }
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int l,r;
// 	    cin>>l>>r;
// 	    if(l==r){
// 	        cout<<1<<endl;
// 	    }
// 	    else{
// 	        cout<<3<<endl;
// 	    }
// 	}
// 	return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,k;
// 	    cin>>n>>k;
// 	   // while(n>=k){
// 	   //     n=n-k;
// 	   // }
// 	    cout<<n%k<<endl;
// 	}
// 	return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int l;
// 	    cin>>l;
// 	    string s;
// 	    cin>>s;
// 	    int i=0;
// 	    while(s[i]=='\0'){
// 	        if(s[i]=='H'){
// 	            cout<<2<<endl;
// 	        }
// 	        i++;
// 	    }
// 	}
// 	return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        set<int>s;
        if(1==y){
            s.insert(x);
        }
        else if(2==y){
            s.erase(x);
        }
        else if(3==y){
            set<int>::const_iterator itr = s.find(x);
            cout << ( (itr != s.end()) ? "Yes" : "No") << endl;
        }   
    }
    return 0;
}





