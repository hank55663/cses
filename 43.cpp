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
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    LL pre[200005];
    pre[0]=0;
    multiset<LL> s;
    LL ans=-1e18-7;
    for(int i = 1;i<=n;i++){
        int x=-1e9;
        scanf("%d",&x);
        pre[i]=pre[i-1]+x;
        if(i>=a){
            s.insert(pre[i-a]);
             ans=max(ans,pre[i]-*s.begin());
        }

       
        if(i>=b){
            s.erase(s.find(pre[i-b]));
        }
    }
    printf("%lld\n",ans);
}