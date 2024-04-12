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
    int t; cin >> t;

    while (t--)
    {
        int n, m; cin >> n >> m;

        vl vn(n); for (int i = 0; i < n; i++) { cin >> vn[i]; }
        vl vm(m); for (int j = 0; j < m; j++) { cin >> vm[j]; }
        vl ans(n);

        sort(all(vn));
        sort(allr(vm));

        ll s = 0;
        for (int i = 0; i < n; i++) {
            ans[i] = vm[i];
            s += abs(ans[i] - vn[i]);
        }

        ll res = 0;

        for (int k = n-1; k >= 0; k--) {
            
            res = max(res, s);
            s -= abs(ans[k] - vn[k]);
            ans[k] = vm[k + m - n];
            s += abs(ans[k] - vn[k]);
        
        }

        res = max(res, s);

        cout << res << "\n";
    
    }
    return 0;
}