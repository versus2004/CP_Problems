#include <bits/stdc++.h>

using namespace std;


#define ll long long

void weird(long n){
        cout<<n<<" ";
    if(n==1){
        return ; 
        }
        if(n%2==0){
            n=n/2;
            weird(n);
        }
        else if(n%2!=0){

            n = n*3 + 1;
            weird(n);
        }

}
int main(){
    long n; 
    cin>>n;
    weird(n);
    return 0; 

}