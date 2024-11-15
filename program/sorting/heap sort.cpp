#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<st> vs;
typedef vector<vi> vvi;
typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef map<int, int> mi;
#define vd(d) vector<d>
#define md(x,y) map<x,y>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(v) (int)(v.size())
#define X first
#define Y second
#define pr(v) cout << v << "\n"
#define pre(f, s) cout << f << " " << s << "\n"
#define fl(v, s, f) for (int(v) = s; (v) < (f); (v)++)
#define fla(n) for (int(i) = 0; (i) < (n); (i)++)
#define fle(n) for (auto &e : n)

void print(vi v)
{
    for(auto e : v) cout<<e<<" ";
    cout<<endl;
}

void createMaxHeap(vi &v,int l)
{
    for(int i=1;i<l;i++)
    {
        int j=i;
        while(v[j] > v[j/2]) swap(v[j/2] , v[j]),j/=2;
    }
}
void heapsrt()
{
    vi v= {1,9,3,6,2,7,11,5};
    vi v1=v;
    createMaxHeap(v,sz(v));

    int vector_size=sz(v)-1;
    for(int i=0;i<sz(v);i++)
    {
        swap(v[0],v[vector_size]);
        createMaxHeap(v,vector_size);
        vector_size--;
    }
    print(v);
}

int main()
{
    heapsrt();
    return 0;
}

