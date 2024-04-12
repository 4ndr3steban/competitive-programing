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
    freopen("socdist.in", "r", stdin);
    freopen("socdist.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int m, n; cin >> n >> m;
    vector<pair<int,int>> v(m);
    for(int i = 0; i<m; ++i){
        cin >> v[i].fi >> v[i].se;
    }

    sort(all(v));

    ll l = 0, r = 1e18+1;

    while(l<r){
        ll mid = l+(r-l+1)/2;
        int c = 1;
        ll pos = v[0].fi;

        for(int i=0; i<m; ++i){

            while(pos+mid<=v[i].se){
                pos += mid;
                c++;
            }

            if (pos+mid<= v[i+1].fi && i<m-1){
                pos = v[i+1].fi;
                c++;
            }

            if(c == n) break;
        }

        if(c >= n){
            l = mid;
        }
        else{
            r = mid-1;
        }
    }
    
    cout << l << el;
    return 0;
}