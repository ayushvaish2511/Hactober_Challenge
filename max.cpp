#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{int t,x;
 if(a>b)
  t=a;
  else 
  t=b;

  if(c>d)
  x=c;
  else
  x=d;

  if(t>x)
  cout<<t;
  else
  cout<<x;
return 0;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    
    
    return 0;
}
