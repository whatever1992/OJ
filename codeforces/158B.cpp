#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <iomanip>
#include <vector>
#include <stack>
#include <map>

using namespace std;

#define max(a, b)  (a) > (b) ? (a) : (b)
#define min(a, b)  (a) > (b) ? (b) : (a)

# define PI           3.14159265358979323846

typedef long long int lli;

lli a[5];

int main(int argc, char const *argv[])
{
  lli n;
  cin >> n;
  int tmp;
  for(lli i = 0; i < n; i++)
  {
	cin >> tmp;
  	a[tmp] ++;
  }
  lli res = a[4] + a[3];
  a[1] = max(a[1]-a[3],0);
  res += (a[1] + a[2] * 2 + 3) / 4;
  
  cout << res << endl; 

  return 0;
}