#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n=0,p=0,count=0,answer=0;



while(1){
cin >> n >> p;
vector<int> v(n,0);
if(n==0&&p==0)
  return 0;
  while(1){
    for(int i=0;i<n;i++){
      if(p==0){

        if(v[i]!=0){
          p+=v[i];
          v[i]=0;
          count=0;
        }else{
          count++;
        }

      }else{
        v[i]++;
        p--;
        count=0;
      }
      if(count==n-1){
      //  cout << count << endl;
        break;
      }
    }if(count==n-1){
    //  cout << count << endl;
      break;
    }


  }


  for(int i=0;i<n;i++){
    if(v[i]!=0){
      answer = i;
    }
  }

  cout<<answer<<endl;
}
}
