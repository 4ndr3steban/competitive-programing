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

bool isprime(ll N){
    if(N < _sieve_size) return is_prime[N];
    for(int i = 0; i < (int)p.size() && p[i]*p[i] <= N; ++i) {
        if(N % p[i] == 0){
            return false;
        }
        return true;
    }

}

vi primeFactors(ll N){
    vi factors;
    for(int i = 0; (i < (int)p.size()) && (p[i]*p[i] <= N); ++i){
        while (N%p[i] == 0)
        {
            N/= p[i];
            factors.pb(p[i]);
        }
    }
    if (N != 0) factors.pb(N);
    return factors;
}


int numDiv(ll N) {
    int ans = 1;

    for (int i = 0; (i < (int)p.size()) && (p[i]*p[i] <= N); ++i){
        int power = 0;
        while (N%p[i] == 0) { N /= p[i]; ++power;}

        ans += power+1; 
    }
    if(N != 1) return 2 * ans;
    else return ans;
}


ll sumDivs(ll N){
    ll ans = 1;
    for (int i = 0; (i < (int)p.size()) && (p[i]*p[i] <= N); ++i){
        ll multiplier = p[i], total = 1;
        while (N%p[i] == 0)
        {
            N /= p[i];
            total += multiplier;
            multiplier += p[i];
        }
        ans += total;
    }
    if(N != 1) ans *= (N+1);
    return ans;
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}