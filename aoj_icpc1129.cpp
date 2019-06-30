#include<bits/stdc++.h>
using namespace std;
int main(){
  while(1){
  int n,r;
  cin >> n >> r;
  if(n==0&&r==0) break;
  vector<int> a(n);

  for(int i=0;i<a.size();i++){
    a[i] = n-i;
    //cout << a[i] << endl;
  }
  for(int k=0;k<r;k++){
  int p,c;
  cin >> p >> c;
  vector<int> tori(c),tmp(p-1);

    for(int i=0;i<(p-1);i++){
      tmp[i]=a[i];
      //cout << endl << tmp[i] << endl << endl;
    }
    for(int i=0;i<c;i++){
      tori[i]=a[(p-1)+i];
      //cout << tori[i] << endl;
    }
    /*for(int i=0;i<c;i++){
      cout << tori[i] << endl;
    }*/
    for(int i=0;i<c;i++){
      a[i]=tori[i];
    }
    int j=0;
    for(int i = c;i<(c+p-1);i++){
      a[i] = tmp[j];
      j++;
    }

  }
  cout << a[0] << endl; 
}
  }
