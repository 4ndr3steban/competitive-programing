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
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int &ai : a) cin >> ai;

        ll ans = 0;

        map<tuple<int, int, int>, int> mp;
        map<pair<int, int>, int> c1;
        map<pair<int, int>, int> c2;
        map<pair<int, int>, int> c3;

        for (int i = 0; i+2 < n; ++i)
        {
            tuple<int, int, int> tp = {a[i], a[i+1], a[i+2]};

            ans += c1[{a[i], a[i+1]}] - mp[tp];
            ans += c2[{a[i], a[i+2]}] - mp[tp];
            ans += c3[{a[i+1], a[i+2]}] - mp[tp];

            mp[tp]++;

            c1[{a[i], a[i+1]}]++;
            c2[{a[i], a[i+2]}]++;
            c3[{a[i+1], a[i+2]}]++;
        }
        
        cout << ans << el;
    }

    return 0;
}