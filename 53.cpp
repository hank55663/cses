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
int dp[505][505];
int DP(int a,int b){
    if(a==b)return 0;
    if(dp[a][b]!=-1)return dp[a][b];
    if(dp[b][a]!=-1)return dp[b][a];
    dp[a][b]=1e9;
    for(int i = 1;i<a;i++){
        dp[a][b]=min(dp[a][b],DP(i,b)+DP(a-i,b)+1);
    }
    for(int i = 1;i<b;i++){
        dp[a][b]=min(dp[a][b],DP(a,i)+DP(a,b-i)+1);
    }
    return dp[a][b];
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    MEMS(dp);
    printf("%d\n",DP(a,b));
}
