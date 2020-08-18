#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector < int >dp_calc (int n)
{
  vector < int >s (n + 1);
  vector < int >d;
  s[0] = 0;
  for (int i = 1; i < s.size (); i++)
    {
      s[i] = s[i - 1]+1 ;

      if (i % 2 == 0)
	{
	  s[i] = min (s[i / 2] + 1, s[i]);
	}

      else if (i % 3 == 0)
	{
	  s[i] = min (s[i / 3] + 1, s[i]);
	}
    }
  int u = n;
  while (u > 1)
    {
      d.push_back (u);
      if (s[u - 1] == s[u] - 1)
	{
	  u = u - 1;
	}
      else if (u % 2 == 0 && (s[u % 2] = s[u] - 1))
	{
	  u = u / 2;
	}
      else if (u % 3 == 0 && (s[u % 3] = s[u] - 1))
	{
	  u = u / 3;
	}
    }

  d.push_back (1);
  reverse (d.begin (), d.end ());

  return d;
}

int
main ()
{
  int n;
  cin >> n;
  vector < int >a;
  a = dp_calc (n);
  for (int i = 0; i < a.size (); i++)
    {
	cout<<a.size()-1<<endl;
      cout << a[i];
    }
  return 0;

}
