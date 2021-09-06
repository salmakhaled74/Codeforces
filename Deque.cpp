#include <bits/stdc++.h>
#include<deque>
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
   int x,n;
   deque <int> d;
   cin >> n;
   for(int i=0; i<n; i++)
   {
      cin >> s1;
      if (s1 == "push_back")
      {
          cin >> x;
          d.push_back(x);
      }
      else if (s1 == "push_front")
      {
          cin >> x;
          d.push_front(x);
      }
      else if(s1 == "front")
          cout <<d.front()<<endl;
      else if(s1 == "pop_front")
          d.pop_front();
      else if(s1 == "pop_back")
          d.pop_back();
      else if(s1 == "back")
          cout <<d.back()<<endl;
      else if(s1 == "print")
      {
          cin >> x;
          cout << d[x-1]<<endl;
      }
    }
}
