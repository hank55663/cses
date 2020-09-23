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
int dp[500*500];
int mod=1e9+7;
int main(){
    int n;
    scanf("%d",&n);
    dp[1]=1;
    for(int i = 2;i<=n;i++){
        for(int j=n*n;j>=i;j--){
            dp[j]+=dp[j-i];
            dp[j]%=mod;
       //     printf("%d %d %d\n",i,j,dp[j]);
        }
    }
    if((n*(n+1)/2)&1){
        printf("0\n");
    }
    else
    printf("%d\n",dp[(n*(n+1)/4)]);
}
