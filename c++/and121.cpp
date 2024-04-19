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
        int n; cin >> n;

        vi v(n); for (int i = 0; i < n; i++) { cin >> v[i]; }

        vi ini(n, 0);
        string ans = "YES";
        for (int i = 0; i < n-2; ++i)
        {
            int aux = v[i]- ini[i];

            ini[i] += aux;
            ini[i+1] += 2*aux;
            ini[i+2] += aux;

            if(ini[i]>v[i] || ini[i+1]>v[i+1] || ini[i+2]>v[i+2]){
                ans = "NO";
                break;
            }

        }
        if(v != ini){
            ans = "NO";
        }

        cout << ans << el;
    }

    return 0;
}