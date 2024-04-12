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
    ll n; cin >> n;

    vl v(n); for (int i = 0; i < n; i++) { cin >> v[i]; }
    
    ll l = 0;
    ll r = v.size();
    ll mi = min(v[l], v[r-1]);
    ll total = 0;
    for (int i = l+1; i < r-1; ++i) {
        if (v[i] >= mi) {total = 0; break;}
        else total += (mi-v[i]);
    }
    while (l<r) {
        ll m = l+(r-l)/2;

        ll contl = 0;
        ll contr = 0;
        ll minl = min(v[l], v[m]), minr = min(v[m], v[r]);
        for (int i = l+1; i < m; ++i) {
            if (v[i] >= minl) {contl = 0; break;}
            else contl += (minl-v[i]);
            if (v[m+i] >= minl) {contr = 0; break;}
            else contr += (minr - v[m+i]);
        }
        total = max(total, max(contl,contr));
        
        if (contl>=contr){
            r = m;
        } else {
            l = m+1;
        }
        
    }
    
    cout << total << el;
    return 0;
}


5 1 10 1 10 1 10 1 5

l = 5
r = 0

l = 10
r = 10