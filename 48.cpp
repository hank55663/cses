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
int dp[1000005];
int DP(int x){
    if(dp[x]!=-1)return dp[x];
    if(x==0)return 0;
    int k=x;
    dp[x]=1e9;
    while(k){
        if(k%10)
        dp[x]=min(dp[x],DP(x-k%10)+1);
        k/=10;
    }
    return dp[x];
}
int main(){
    MEMS(dp);
    int n;
    scanf("%d",&n);
    printf("%d\n",DP(n));
}
