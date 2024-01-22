#include "bits/stdc++.h"
using namespace std;
int main(){
    long n , a,b ; 
            const long  mod = 1e9+7;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a>=1&&b>=1){

          long  long x = pow(a,b);
            
            cout<<x%mod;}
                else{
                    cout<<0;
                }
    }
    return 0;
}