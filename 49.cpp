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
int dp[1005][1005];
const int mod=1e9+7;
int main(){
    char c[1005][1005];
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        scanf("%s",c[i]+1);
    }
    dp[0][1]=1;
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
            if(c[i][j]=='*')dp[i][j]=0;
        }
    }
    printf("%d\n",dp[n][n]);
}
