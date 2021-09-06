#include <bits/stdc++.h>
#include<stack>
using namespace std;

void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
   init();
   string s1;
   int x;
   stack <int> s;
   int q;
   cin >>q ;
   for(int i=0; i<q; i++)
   {
      cin>>s1;
      if (s1 == "push")
      {
          cin >> x;
          s.push(x);
      }
      else if (s1 == "pop")
          s.pop();
      else
          cout<<s.top()<<"\n";
    }
}
