
#include <bits/stdc++.h>
using namespace std ; 

void divide_watermelon(int a){

    if(a>2){
    if(a%2==0)cout<<"Yes";
    else cout<<"No";}
    else{
        cout<<"No";
    }

}
int main(){
    int t;
            cin>>t;
            divide_watermelon(t);
}