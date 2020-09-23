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
LL dp[5005][5005];
int main(){
    int n;
    scanf("%d",&n);
    int x[5005];
    LL sum=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&x[i]);
        dp[i][i]=x[i];
        sum+=x[i];
    }
    for(int j = 1;j<n;j++){
        for(int k =1;k+j<=n;k++){
            dp[k][k+j]=max(x[k]-dp[k+1][k+j],x[k+j]-dp[k][k+j-1]);
        }
    }
    printf("%lld\n",(sum-dp[1][n])/2+dp[1][n]);
}
