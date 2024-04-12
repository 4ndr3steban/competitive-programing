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
    ll n, t; cin >> n >> t;

    vl v(n); for (int i = 0; i < n; i++) { cin >> v[i]; }
    
    ll l = 0;
    ll r = 1e18+1;
    while (l<r) {
        ll m = l+(r-l)/2;

        ll cont = 0;
        for (int i = 0; i < n; ++i) {
            cont += m/v[i];

            if (cont >= t) break;
        }
        
        if (cont>=t){
            r = m;
        } else {
            l = m+1;
        }
        
    }
    
    cout << l << el;
    return 0;
}