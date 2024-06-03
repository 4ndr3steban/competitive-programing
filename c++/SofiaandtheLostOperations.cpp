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
        vi a(n); for (int &ai : a) cin >> ai;
        vi b(n); for (int &bi : b) cin >> bi;
        int m; cin >> m;
        vi d(m); for (int &di : d) cin >> di;
        int ans = 0;
        int neg = 0;
        int aux = 0;
        multiset<int> ms;
        multiset<int> borr;
        
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i]) {
                ms.insert(b[i]);
            } else {
                borr.insert(b[i]);
            }
        }

        for (int i = 0; i < m; ++i)
        {   
            if (ms.find(d[i]) != ms.end()) {
                ms.erase(ms.find(d[i]));
                borr.insert(d[i]);
            }


        }

        if (ms.size() <= 0 && borr.find(d[m-1]) != borr.end()) {
            cout << "YES" << el;
        } else {
            cout << "NO" << el;
        }
    }
    
    return 0;
}