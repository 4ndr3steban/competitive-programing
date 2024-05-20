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

    ll c; cin >> c;
    int m; cin >> m;
    ll len = sqrt(c);
    int flag = 0;
    set<int> v; for (int j = 0; j < m; j++) { int b; cin >> b; v.insert(b); }

    vector<bool> is_prime(len+1, true);

    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= len; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= len; j += i)
                is_prime[j] = false;

            if (c%i == 0 && v.find(c/i) != v.end() && v.find(i) != v.end()) {
                cout << i << tl << c/i << el;
                flag = 1;
                break;
            };
        }
    }

    
    if (flag == 0 && v.find(1) != v.end() && v.find(c) != v.end()) {
        cout << 1 << tl << c << el;
    };
    return 0;
}