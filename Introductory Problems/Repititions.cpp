#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a,n) a, a + n

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    string s ;
    cin >> s ;
    int str_length = s.size();
    int ans=0;

    for(int i=0;i<str_length-1;i++){
      int start=i, end=i;
      while(s[i+1]==s[i]){
        end++;
        i++;
      }
      if(end-start>ans){
        ans = end-start;
      }
    }
    cout<<ans+1<<endl;

    return 0 ;

}
