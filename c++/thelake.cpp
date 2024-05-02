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

int n, m;
int a[1005][1005];
bool vis[1005][1005];

int dfs(int i, int j)
{
    vis[i][j] = true;
    int ans = a[i][j];
    if(i != 0 && a[i-1][j] != 0 && !vis[i-1][j]) { // seguir atras
        ans+=dfs(i-1, j);
    }

    if(i != n-1 && a[i+1][j] != 0 && !vis[i+1][j]) { // seguir adelante
        ans+=dfs(i+1, j);
    }

    if(j != 0 && a[i][j-1] != 0 && !vis[i][j-1]) { // seguir arriba
        ans+=dfs(i, j-1);
    }

    if(j != m-1 && a[i][j+1] != 0 && !vis[i][j+1]) { // seguir abajo
        ans+=dfs(i, j+1);
    }

    return ans;
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--){
        int n, m; cin >> n >> m;

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                vis[i][j] = false;
                cin >> a[i][j];
            }
        }

        int ans = 0;

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                
                if(!vis[i][j] && a[i][j] != 0) {
                    ans = max(ans, dfs(i, j));
                }
            }
        }

        cout << ans << el;

    }
    return 0;
}