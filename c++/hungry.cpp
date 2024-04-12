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

    int n; cin >> n;

    vi isPrime(1e7, 1);
    vi primes;
    isPrime[0] = isPrime[1] = 0;
    for (int i=2; i<1e7; ++i) {
        if(primes.size() == n) break;
        if (isPrime[i]) {
            primes.pb(i);
            for (int h=2; h*i<1e7; ++h) isPrime[i*h] = 0;
        }
    }

    for (auto i: primes) cout << i << tl;

    return 0;
}