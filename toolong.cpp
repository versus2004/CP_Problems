#include "bits/stdc++.h"
using namespace std;

int main (){
        string x ;


        int y ;
        cin>>y;
        for(int i=0;i<y;i++){
        cin>>x;

        int lengthof = x.length();

        if(lengthof>10){
    string sub = x.substr(1,lengthof-2);

    int m = sub.length();
cout << x.substr(0, 1) << m  << x.substr(lengthof - 1)<<"\n";}
    else{
        cout<<x<<"\n";
    }}

    return 0;
}