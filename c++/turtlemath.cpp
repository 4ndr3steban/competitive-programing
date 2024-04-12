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
        ll suma = 0;
        bool flag = false;
        while (n--)
        {
            ll x; cin >> x;

            suma += x;
            if(x % 3 == 1){
                flag = true;
            }
        }

        if (suma % 3 == 0){
            cout << 0 << el;
        } else if (suma % 3 == 2 || flag == true){
            cout << 1 << el;
        } else {
            cout << 2 << el;
        }

    }
    

    return 0;
}

0 = 2
1 = 2
2 = 1

012
021
102
120
201
210

c = 5

0 1 2 0 1

