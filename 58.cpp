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
vector<pii> v[400005];
LL dp[400005];
int main(){
    int n;
    scanf("%d",&n);
    pair<pii,int> p[200005];
    map<int,int> m;
    for(int i = 0;i<n;i++){
        int l,r,q;
        scanf("%d %d %d",&l,&r,&q);
        l--;
        m[l];
        m[r];
        p[i]=mp(mp(r,l),q);
    }
    int index=0;
    for(auto &it:m){
        it.y=++index;
    }
    for(int i = 0;i<n;i++){
        v[m[p[i].x.x]].pb(mp(m[p[i].x.y],p[i].y));
    }
    for(int i = 1;i<=index;i++){
        dp[i]=dp[i-1];
        for(auto it:v[i]){
            dp[i]=max(dp[i],dp[it.x]+it.y);
        }
    }
    printf("%lld\n",dp[index]);
}
