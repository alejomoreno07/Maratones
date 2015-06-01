#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int n,m,p;

void start(){
  cin>>n>>m>>p;
  ((p-n)>=m)? cout<<"Props win!"<<endl:cout<<"Hunters win!"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    start();
    return 0;
}