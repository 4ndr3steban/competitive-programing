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

    while (t--) {
        int n; cin >> n;
        vl v(n); for (ll &i: v) { cin >> i;}

        int suma = 0;
        for (int i = 0; i < n; ++i) {suma += v[i];}
        int target = suma/n;
        int ans = 1;
        for (int i = 0; i < n; ++i){

            if (v[i] < target) { ans = 0; break;}
            
            v[i + 1] += v[i] - target;
        }

        if (ans == 1){cout << "YES" << el;}
        else {cout << "NO" << el;}

    }
    
    return 0;
}