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
    // freopen("haybales.in", "r", stdin);
    // freopen("haybales.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m; cin >> n>> m;
    vl c(n), t(m);
    ll r = 0;

    for(int i = 0; i<n; ++i){
        cin >> c[i];
    }

    for(int i = 0; i<m; ++i){
        cin >> t[i];
    }

    for (int i = 0; i<n; ++i){
        ll num = c[i];
        auto ind = lower_bound(all(t), num);
        ll r_temp = min(abs(c[i]-*ind), abs(c[i]-t[ind-t.begin()-1]));
        r = max(r, r_temp);
    }

    cout << r << el;


    
    return 0;
}