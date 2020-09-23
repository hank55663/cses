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
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        int r=max(x,y)-1;
        LL ans=r*1ll*r;
        
        if((r&1)==0){
            if(x==r+1)printf("%lld\n",ans+y);
            else{
                printf("%lld\n",ans+r+r+2-x);
            }
        }
        else{
            if(y==r+1)printf("%lld\n",ans+x);
            else{
                printf("%lld\n",ans+r+r+2-y);
            }

        }
    }
}