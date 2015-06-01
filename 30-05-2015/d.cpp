#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


unsigned long long int n,d,a;
vector<int> v;

unsigned long long int lcm(unsigned long long int a, unsigned long long int b)
{
    unsigned long long int temp = __gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

unsigned long long int sol=1;

void start(){
  cin>>n>>d;
  sol=1;
  for(int i=0;i<n;i++){ cin>>a; sol=lcm(a-d,sol); }
  cout<<sol<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--){start();}
    return 0;
}