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
int dis[100005];
int from[100005];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 0;i<m;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        v[x].pb(y);
        v[y].pb(x);
    }
    MEMS(dis);
    queue<int> q;
    q.push(n);
    
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(auto it:v[x]){
            if(dis[it]==-1){
                dis[it]=dis[x]+1;
                q.push(it);
                from[it]=x;
            }
        }    
    }
    if(dis[1]==-1){
        printf("IMPOSSIBLE\n");
    }
    else{
        vector<int> v;
        int now=1;
        v.pb(1);
        while(now!=n){
            now=from[now];
            v.pb(now);
        }
        printf("%d\n",v.size());
        for(auto it:v){
            printf("%d ",it);
        }
        printf("\n");
    }
}
