
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
        int n, m, k; cin >> n >> m >> k;
 
        vl vn(n); for (int i = 0; i < n; i++) { cin >> vn[i]; }
        multiset<int> target; for (int j = 0; j < m; j++) { int b; cin >> b; target.insert(b); }
        multiset<int> good, bad;

        // Poner los elementos buenos del primer subarray en good y los sobrantes en bad
        for (int i = 0; i < m; i++) {
            if(target.find(vn[i]) != target.end()){
                target.erase(target.find(vn[i]));
                good.insert(vn[i]);
            }else{
                bad.insert(vn[i]);
            }
        }

        // contar si la cantidad de buenos el mayor al objetivo
        int ans = (good.size() >= k);


        for (int j = m; j < n; ++j){
            int left = vn[j-m];
            int right = vn[j];

            // Sacar el primer elementos del subarray actual ya sea de los buenos o de los sobrantes
            if(bad.find(left) != bad.end()){
                bad.erase(bad.find(left));
            }else if(good.find(left) != good.end()){
                good.erase(good.find(left));
                target.insert(left);
            }

            // Meter el nuevo elemento ya sea a los buenos o a los sobrantes
            if(target.find(right) != target.end()){
                good.insert(right);
                target.erase(target.find(right));
            } else{
                bad.insert(right);
            }

            // sumar un subarray bueno si los elementos buenos son mas que el objetivo (k)
            ans += (good.size() >= k);
        }

        cout << ans << el;
    }
    return 0;
}