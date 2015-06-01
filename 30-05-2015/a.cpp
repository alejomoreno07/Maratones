#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int n;
string s,aux;

void solver(){
  cin>>s;
    aux="";
    int k=1;
    bool flag=true;
    string tempo;
    while(flag){
              aux="";
      for(int i=0;i<s.size();i+=k){
        if(s.size()==k){
          cout<<k<<endl;
          return;
        }
        if(s.size()%k!=0){
          flag=false;
          break;
        }

        tempo="";
        for(int j=i;j<i+k;j++){
          if(i==0){
            aux+=s.at(j);
          }
          else tempo+=s.at(j);
        }
        if(tempo!=aux && i!=0){ flag=false; break;}
      }
      if(!flag){ k++; flag=true;}
      else { cout<<k<<endl;  return;}
  }
}

void start(){
  cin>>n;
  while(n--){
    solver();
  }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    start();
    return 0;
}