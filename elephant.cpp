
#include <bits/stdc++.h>
using namespace std;


int main(){

    int m;
    cin>>m;
        int answer;
    if(m%5==0){
        answer=m/5;
    }
    else{
        answer= (m/5)+1;
    }
cout<<answer;


    return 0;
}