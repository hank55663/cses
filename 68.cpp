#include<bits/stdc++.h>
#define LL long long
#define x first
#define y second
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
using namespace std;
LL dis[2505];
LL cnt[2505];
LL inq[2505];
vector<pii> v[2505];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 0;i<m;i++){
        int x,y,c;
        scanf("%d %d %d",&x,&y,&c);
        v[x].pb(mp(y,c));
    }
    fill(dis,dis+n+1,-1e18);
    dis[1]=0;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        inq[x]=0;
       // printf("%d %d\n",x,dis[x]);
        for(auto it:v[x]){
            if(dis[it.x]<dis[x]+it.y&&dis[it.x]!=1000000000000000000ll){
                dis[it.x]=dis[x]+it.y;
                cnt[it.x]++;
                dis[it.x]=min(dis[it.x],1000000000000000000ll);
                if(cnt[it.x]>n){
                    dis[it.x]=1e18;
                }
                if(!inq[it.x]){
                    q.push(it.x);
                    inq[it.x]=1;
                }
            }
        }
    }
    if(dis[n]==1000000000000000000ll){
        printf("-1\n");
    }
    else{
        printf("%lld\n",dis[n]);
    }
}