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
    
    int n; ll k;
    cin >> n >> k;

    vl a(n);
    for(ll &i : a) cin >> i;

    sort(all(a));

    ll l = 0, r = 2*1e9+1;

    while (l<r){
        ll m = l+(r-l)/2;

        ll x = 0;

        for(int i = n/2; i<n; i++){
            if(x>k) break;
            x += max(m - a[i], 0LL);
            
        }

        if(x>k){
            r = m;
        }
        else{
            l = m+1;
        }
    }

    cout << l - 1<< el;
    
    return 0;
}