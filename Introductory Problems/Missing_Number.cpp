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
    ll n;
    cin>>n;
    vll a;
    for(ll i=0;i<n-1;i++){
        ll k;
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    if(a[n-2]!= n){
        cout<<n<<endl;
    }
    else{
    for(ll i=0;i<n-1;i++){
        if(a[i]!= i+1){
            cout<<i+1<<endl;
            break;
        }
    }
    }
    return 0 ;

}
