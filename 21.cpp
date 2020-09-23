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
    vector<pii> v;
    for(int i = 0;i<n;i++){
        int l,r;
        scanf("%d %d",&l,&r);
        v.pb(mp(l,1));
        v.pb(mp(r,-1));
    }
    sort(v.begin(),v.end());
    int sum=0,ans=0;
    for(auto it:v){
        sum+=it.y;
        ans=max(ans,sum);
    }
    printf("%d\n",ans);
}