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

    while(t--){
        int n, m; cin >> n >> m;

        vi va(n); for (int i = 0; i < n; i++) { cin >> va[i]; }
        vi vb(n); for (int i = 0; i < n; i++) { cin >> vb[i]; }

        ll ans = 1e18;
        ll ansaux = 0;
        ll aux = 0;
        for (int i = n-1; i >= 0; --i){
            int a = va[i];
            int b = vb[i];

            if(i > m-1){
                if(a >= b){
                    aux += b;
                } else {
                    ansaux += aux;
                    ansaux += a;
                    aux = 0;
                }

            } else {
                ans = min(ans, ansaux + aux + a);
                aux += b;
            }

            //cout << ansaux << tl << aux << el;

        }

        cout << ans << el;
    }

    return 0;
}