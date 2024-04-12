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

    string d; cin >> d;
    int m; cin >> m;


    while(m--){
        int s, e; cin >> s >> e;
        vector<pair<int, int>> count = {{1, 0}, {2, 0}, {3, 0}, {4, 0}};

        for(int i = s; i <= e; ++i){
            if (d[i-1]== 'A'){
                count[0].se++;
            }
            else if (d[i-1]== 'T'){
                count[1].se++;
            }
            else if (d[i-1]== 'G'){
                count[2].se++;
            }
            else if (d[i-1]== 'C'){
                count[3].se++;
            }

        }

        sort(all(count), [](const pair<int, int>& a, const pair<int, int>& b){
            if(a.se != b.se){
                return a.se > b.se;
            }
            return a.fi <b.fi;)
        };

    
        for(int i = 0; i<4; ++i){
            if(count[i].fi == 1){
                cout << 'A';
            }
            else if(count[i].fi == 2){
                cout << 'T';
            }
            else if(count[i].fi==3){
                cout << 'G';
            }
            else if(count[i].fi == 4){
                cout << 'C';
            }
        }
        cout << el;


    return 0;
}