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
    LL p[25];
    LL tot=0;
    for(int i = 0;i<n;i++){
        scanf("%lld",&p[i]);
        tot+=p[i];
    }
    LL ans=2e9+7;
    for(int i = 0;i<(1<<n);i++){
        LL val=0;
        for(int j = 0;j<n;j++){
            if(i&(1<<j))val+=p[j];
        }
        ans=min(ans,abs(tot-val*2));
    }
    printf("%lld\n",ans);
}