#include <bits/stdc++.h>

using namespace std;
 typedef long long ll;
 

int main(){
      string s,x="";
      cin>>s;
      
      int t=0,y=0;

      for (int i = 0; i < s.size(); i++)
      {
        if(s[i]=='+')   t++;
        
      }
      y=t+1;
      int d[y]={0};
      t=0;
      for (int i = 0; i < s.size(); i++)
      {
        if(s[i]=='+'){t++;
        i++;
        }
        d[t]+=s[i]-'0';
      }
      sort(d,d+y);
      for (int i = 0; i < y; i++)
      {
        cout<<d[i];
        if(i<y-1)
          cout<<"+";
      }
}
