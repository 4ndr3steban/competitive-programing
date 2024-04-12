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
    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q; cin >> n >> q;

    vi h(n);
    for (int i = 0; i < n; ++i){
        cin >> h[i];
    }

    sort(all(h));

    for(int i = 0; i < q; ++i){
        int a, b; cin >> a>> b;

        auto ai = lower_bound(all(h), a);
        auto bi = lower_bound(all(h), b);
        int ans = (bi-ai);
        if(*bi == b){
            ans += 1;
        }

        cout <<  ans << el;
    }
    return 0;
}