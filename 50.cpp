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
int dp[100005];
int main(){
  //  MEMS(dp);
    int n,x;
    scanf("%d %d",&n,&x);
    int h[1005];
    int s[1005];
    for(int i=  0;i<n;i++){
        scanf("%d",&h[i]);
    }
  //  printf("?\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&s[i]);
        for(int j = x;j>=h[i];j--){
      //      printf("%d %d\n",j,dp[j]);
            dp[j]=max(dp[j],dp[j-h[i]]+s[i]);
        }

    }
    printf("%d\n",dp[x]);
    
}
