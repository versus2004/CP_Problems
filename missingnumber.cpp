#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int currsum=0;
int sum =0;
for(int i=1;i<=n;i++){
sum+=i;
}
for(int i=1;i<n;i++){
int m ;
cin>>m;
currsum+=m;
}
int missing = sum-currsum;

cout<<missing;
return 0 ; 
}