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

map<char, int> mp = {{'N', 0}, {'S', 1}, {'E', 2}, {'W', 3}};

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        vi v(4,0);
        for (int i = 0; i < n; ++i) {
            v[mp[s[i]]]++;
        }

        if ((v[0] - v[1]) % 2 != 0 || (v[2] - v[3]) % 2 != 0)
        {
            cout << "NO" << el;
            continue;
        }
        
        pair<int, int> target;
        target.fi = (v[0] - v[1]) / 2;
        target.se = (v[2] - v[3]) / 2;

        pair<int, int> r = {0, 0};
        pair<int, int> h = {0, 0};

        string ans = "R";

        if (s[0] == 'N' || s[0] == 'S') {
            r.first += (s[0] == 'N') ? 1 : -1;
        } else {
            r.second += (s[0] == 'E') ? 1 : -1;
        }

        for (int i = 1; i < n; ++i)
        {
            if (s[i] == 'N')
            {
                if (r.fi >= target.fi) {
                    h.fi++;
                    ans += 'H';
                } else {
                    r.fi++;
                    ans += 'R';
                }
            } else if (s[i] == 'S')
            {
                if (r.fi <= target.fi) {
                    h.fi--;
                    ans += 'H';
                } else {
                    r.fi--;
                    ans += 'R';
                }
            } else if (s[i] == 'E')
            {
                if (r.se >= target.se) {
                    h.se++;
                    ans += 'H';
                } else {
                    r.se++;
                    ans += 'R';
                }
            } else if (s[i] == 'W')
            {
                if (r.se <= target.se) {
                    h.se--;
                    ans += 'H';
                } else {
                    r.se--;
                    ans += 'R';
                }
            }
        }

        if (r.fi == target.fi && h.fi == target.fi && r.se == target.se && h.se == target.se && ans.find('H') < n) {
            cout << ans << el;
        } else {
            cout << "NO" << el;
        }
        
    }
    

    return 0;
}