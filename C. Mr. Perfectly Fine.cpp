#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <fstream>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define imp cout<<"-1"<<el;
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;
// ----------------------------Functions---------------------------- //
ll string_to_num(char c, string word){
  ll val = 0;
  if (c == 'x')
  {
    for (ll i = 0; i < word.size(); i++)
    {
      val *= 10;
      val += word[i]-48;
    }
  }
  else
  {
    val += c-48;
  }
  return val;
}
bool isPrime(ll k)
{
  if (k == 1)
  {
    return false;
  }
  for (ll i = 2; i * i <= k; i++)
  {
    if (k % i == 0)
    {
      return false;
    }
  }
  return true;
}
// ----------------------------------------------------------------- //
void solution(){
  ll n;
  cin >> n;
  ll x = INT_MAX, y = INT_MAX, z = INT_MAX;
  bool cond = true, cond1 = true, cond2 = true;
  for (ll i = 0; i < n; i++)
  {
    ll m;
    cin >> m;
    ll binary;
    cin >> binary;
    if (binary == 1)
    {
      x = min(x,m);
      cond = false;
    }
    else if (binary == 10)
    {
      y = min(y,m);
      cond1 = false;
    }
    else if (binary == 11)
    {
      z = min(z,m);
      cond2 = false;
    }
  }
  if ((cond && (!cond1)) || (cond1 && (!cond)) || (cond && cond1))
  {
    if (cond2)
    {
      imp
      return;
    }
  }
  cout << min((x+y),z) << el;
}

int main(){ MW_HY
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int ntimes  = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}