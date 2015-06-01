#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


long long int t;
long long int n,m;


void solver(){
  cin>>n>>m;
  unsigned long long int sol=0;
  sol+=((m)*(m-1))/2;
  sol-=(m-n<0)? 0:((m-n)*(m-n-1))/2;
  cout<<sol<<endl;
}

void start(){
  cin>>t;
  while(t--){
    solver();
  }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    start();
    return 0;
}