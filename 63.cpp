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
int color[100005];
vector<int> v[100005];
int dfs(int x,int c){
    if(color[x]==-1){
        color[x]=c;
    }
    else{
        return color[x]==c;
    }
    for(auto it:v[x]){
        if(!dfs(it,c^1))return false;
    }
    return true;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    //for(int i=1;i<=n;i++)f[i]=i;
    for(int i = 0;i<m;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        v[x].pb(y);
        v[y].pb(x);
    }
    MEMS(color);
    for(int i = 1;i<=n;i++){
        if(color[i]==-1){
            if(!dfs(i,0)){
                printf("IMPOSSIBLE\n");
                return 0;
            }
        }
    }
    for(int i = 1;i<=n;i++){
        if(color[i]==0)printf("2 ");
        else printf("1 ");
    }
    printf("\n");
}
