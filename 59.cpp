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
char c[1005][1005];
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};
void dfs(int x,int y){
    if(c[x][y]!='.')return ;
    c[x][y]='#';
    for(int i = 0;i<4;i++){
        dfs(x+X[i],y+Y[i]);
    }
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 1;i<=n;i++){
        scanf("%s",c[i]+1);
    }
    int ans=0;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(c[i][j]=='.'){
                dfs(i,j);
                ans++;
            }
        }
    }
    printf("%d\n",ans);
}
