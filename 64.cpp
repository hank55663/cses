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
vector<int> v[100005];
int vis[100005];
vector<int> stk;
void dfs(int x,int f){
    vis[x]=1;
    stk.pb(x);
    for(auto it:v[x]){
        if(it!=f){
            if(vis[it]==1){
                vector<int> ans;
                ans.pb(it);
                while(stk.back()!=it){
                    ans.pb(stk.back());
                    stk.pop_back();
                }
                printf("%d\n",ans.size()+1);
                for(auto it:ans){
                    printf("%d ",it);
                }
                printf("%d\n",ans[0]);
                exit(0);
            }
            else
            dfs(it,x);
        }
    }
    stk.pop_back();
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 0;i<m;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        v[x].pb(y);
        v[y].pb(x);
    }
    for(int i = 1;i<=n;i++){
        if(!vis[i]){
            dfs(i,0);
        }
    }
    printf("IMPOSSIBLE\n");
}
