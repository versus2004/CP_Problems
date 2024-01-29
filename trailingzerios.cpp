#include <bits/stdc++.h>
using namespace std;

int main(){
    long long m;
    long count;
    int rem=0;
    cin>>m;
        long long fact = 1;
        while (m>0)
        {
            fact=fact*m;
            m--;
            /* code */
        }
        cout<<fact<<"\n";
        while (fact%10==0)
        {
            count++;
            fact=fact/10;
        
            /* code */
        }
        cout<<count;
        
        
}
