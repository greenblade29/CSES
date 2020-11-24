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

    ll n,k;
    cin>>n;
    vll a;
    if(n<5){
      if(n==1){
        cout<<1<<endl;
      }
      else if(n==4){
        cout<<2<<" "<<4<<" "<<" "<<1<<" "<<3<<endl;
      }
      else{
        cout<<"NO SOLUTION";
      }
        return 0;
    }
    if(n%2==0){
        k=n;
        while(k!=0){
            a.push_back(k);
            k-= 2;
        }
        k=n-1;
        while(k!= -1){
            a.push_back(k);
            k-= 2;
        }
    }
    else{
        k=n-1;
        while(k!=0){
            a.push_back(k);
            k-= 2;
        }
        k=n;
        while(k!= -1){
            a.push_back(k);
            k-= 2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0 ;

}
