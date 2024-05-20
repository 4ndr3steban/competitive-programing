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

const int dirx[4] = {0,1,0,-1};
const int diry[4] = {1,0,-1,0};

struct comp {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) const{
    if (p1.se > p2.se) return true;
    else if (p1.se < p2.se) return false;
    else{
        if(p1.fi > p2.fi) return true;
        else return false;
    }
    }
};

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    priority_queue<pair<int, int>, vector<pair<int, int>>, comp> pq;

    vi vn(n); for (int i = 0; i < n; i++) { cin >> vn[i]; }

    for (int i = 0; i <= n-k; i++)
    {
        int aux = 0;
        for (int j = 0; j < k; j++)
        {
            aux += vn[i+j]*(j+1);
        }

        pair<int, int> curr;
        curr = {i+1, aux};
        pq.push(curr);

    }
    

    while (!pq.empty()){
        pair<int, int> aux = pq.top();
        pq.pop();

        cout << aux.fi << tl << aux.se << el;
    }

    
    return 0;
}