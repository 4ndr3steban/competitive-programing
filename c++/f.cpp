#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define sz(s) (int)s.size()
#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
 
ll inf = 1e12;
int iinf = 1e9 + 7;
int mod = 1e9 + 7;
const char el = '\n';
const char tl =  ' ';
const double pi = acos(-1);
const double eps= 1e-9;
const int MOD = 1e9+7;

int dr[] = {1,-1,0, 0,1,-1,-1, 1};
int dc[] = {0, 0,1,-1,1, 1,-1,-1};
string abc = "abcdefghijklmnopqrstuvwxyz";

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;

    while (t--){
        ll n; cin >> n;

        map<ll, ll> mp;
        vl v;
        while (n--)
        {
            ll a, b; cin >> a >> b;
            mp[a] = b;
            v.pb(b);
        }   
        sort(all(v));
        ll ans = 0;
        map<int,int> mp;
        for (auto elem : mp)
        {
            auto right = lower_bound(all(v), elem.se);
            ll pos = right - v.begin();

            ans += pos;
            v.erase(right);
            
        }
        cout << ans << "\n";
        
    }
    
    return 0;
}