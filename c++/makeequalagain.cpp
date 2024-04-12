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

        vi v(n); for (int &i: v) { cin >> i;}

        int left = 0, right = 0;

        while(left < n && v[left] == v[0]) { left += 1; }
        while(right < n && v[n - right - 1] == v[n-1]) { right += 1; }

        int ans = n;

        if (v[0] == v[n-1])
        {
            ans -= left;
            ans -= right;
        }else{
            ans -= max(left, right);
        }
        
        cout << max(0,ans) << el;
    }
    
    return 0;
}