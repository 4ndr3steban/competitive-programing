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
    while(t--){
        int n, k; cin >> n >> k;
        vi ans(n);

        if(n==1){
            ans[0] = k;
        }
        else{
            int bit = 0;
            for(int i= 0; i<31; ++i){
                if(k & (1<<i)){
                    bit = i;
                }
            }
            ans[0] = pow(2,bit) - 1;
            ans[1] = k-ans[0];

            for(int i =  2; i<n; ++i){
                ans[i] = 0;
            }
        }

        for(int i= 0; i<n; ++i){
            cout <<ans[i] <<tl;
        }
        cout << el;
    }

    return 0;
}