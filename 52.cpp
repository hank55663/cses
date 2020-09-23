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
int dp[5005][5005];
int main(){
    char s[5005],t[5005];
    scanf("%s",s+1);
    scanf("%s",t+1);
    for(int i = 1;s[i]!=0;i++){
        dp[i][0]=i;
    }
    for(int i = 1;t[i]!=0;i++){
        dp[0][i]=i;
    }
    for(int i = 1;s[i]!=0;i++){
        for(int j=1;t[j]!=0;j++){
            if(s[i]==t[j])dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=dp[i-1][j-1]+1;
            dp[i][j]=min(min(dp[i-1][j],dp[i][j-1])+1,dp[i][j]);
        }
    }
    printf("%d\n",dp[strlen(s+1)][strlen(t+1)]);
}
