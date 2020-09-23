#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define ULL unsigned long long
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<LL,LL>
#define x first
#define y second
#define pi acosl(-1)
#define sqr(x) ((x)*(x))
#define pdd pair<double,double>
#define MEMS(x) memset(x,-1,sizeof(x))
#define MEM(x) memset(x,0,sizeof(x))
#define EPS 1e-4
#define arg ARG
#define cpdd const pdd
#define rank Rank
#define MAXN 205
//#define N 262144
#define ULL unsigned long long
#define ll long long
int main(){
    int n;
    scanf("%d",&n);
    map<int,int> m;
    m[0]=0;
    vector<pii> v;
    for(int i = 0;i<n;i++){
        int l,r;
        scanf("%d %d",&l,&r);
        v.pb(mp(r,l));
    }
    sort(v.begin(),v.end());
    for(auto it:v){
        int a=m.rbegin()->y;
        int b=prev(m.upper_bound(it.y))->y+1;
        m[it.x]=max(a,b);
    }
    printf("%d\n",m.rbegin()->y);
}