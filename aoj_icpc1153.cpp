#include<bits/stdc++.h>
using namespace std;
int main(){
  while(1){
    int n,m,st=0,sh=0,min=200;
    cin >> n >> m;
    if(n==0&&m==0) break;
    vector<int> t(n),h(m);
    for(int i=0;i<n;i++){
      cin >> t[i];
      st += t[i];
    }
    for(int i=0;i<m;i++){
      cin >> h[i];
      sh += h[i];
    }

    int ans_t=0;
    int ans_h=0;
    sort(t.begin(),t.end());
    sort(h.begin(),h.end());
    bool flag =false;
    
    for(int i=0;i<n;i++){
      //tarou
      for(int j=0;j<m;j++){
        //hanako
        if((t[i]<=h[j]) && (st+(h[j]-t[i])) == (sh-(h[j]-t[i]))){
          if(min > (t[i]+h[j]) ){
            ans_t=t[i];
            ans_h=h[j];
            min = t[i]+h[j];
            flag = true;
          }
        }

        if(t[i]>h[j] && (st-(t[i]-h[j])) == (sh+(t[i]-h[j])) ){
          if(min > (t[i]+h[j])){
            ans_t=t[i];
            ans_h=h[j];
            min = t[i]+h[j];
            flag = true;
          }
        }
      }
    }
    if(flag)
    cout << ans_t << " " << ans_h <<endl;

    else cout << -1 << endl;
  }
  return 0;
}
