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
        int n; cin >> n;
        deque<int> a(n); for (int &ai : a) cin >> ai;
        deque<int> sol(n);
        int maxim = 0;
        ll max_sum = 0;
        ll sum_all = 0;
        int ans = 0;

        sol.pb(a.front());
        maxim = max(maxim, a.front());
        sum_all = a.front();
        a.pop_front();

        if (maxim == max_sum) {
            ans += 1;
        }
        
        for (int i = 0; i+1 < n; ++i) {
            if (a.front() >= maxim && sum_all == a.front()) {
                ans += 1;
            } else if (a.front() < maxim && max_sum+a.front() == maxim) {
                ans += 1;
            }
            sol.pb(a.front());
            sum_all += a.front();
            maxim = max(maxim, a.front());
            max_sum = sum_all - maxim;
            a.pop_front();
        }
        
        cout << ans << el;

    }
    
    return 0;
}