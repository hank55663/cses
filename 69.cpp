#include<bits/stdc++.h>
#define pii pair<int,int>
#define x first
#define y second
#define mp make_pair
#define LL long long
#define pb push_back
using namespace std;
vector<pii> v[100005];
LL dis[100005][2];
int inq[100005][2];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i = 0;i<m;i++){
        int x,y,w;
        scanf("%d %d %d",&x,&y,&w);
        v[x].pb(mp(y,w));
    }
    deque<pii> q;
    q.push_front(mp(1,0));
    for(int i = 1;i<=n;i++)dis[i][0]=dis[i][1]=1e18;
    dis[1][0]=0;
    while(!q.empty()){
        pii p=q.front();
        if(dis[p.x][p.y]<dis[q.back().x][q.back().y]){
            q.pop_front();
        }
        else{
            p=q.back();
            q.pop_back();
        }
        inq[p.x][p.y]=0;
       // printf("%d %d %lld\n",p.x,p.y,dis[p.x][p.y]);
        for(auto it:v[p.x]){
            if(dis[it.x][p.y]>dis[p.x][p.y]+it.y){
                dis[it.x][p.y]=dis[p.x][p.y]+it.y;
                if(!inq[it.x][p.y]){
                    inq[it.x][p.y]=1;
                    q.push_front(mp(it.x,p.y));
                }
            }
            if(p.y==0){
                if(dis[it.x][1]>dis[p.x][p.y]+it.y/2){
                    dis[it.x][1]=dis[p.x][p.y]+it.y/2;
                    if(!inq[it.x][1]){
                        inq[it.x][1]=1;
                        q.push_front(mp(it.x,1));
                    }
                }
            }
        }
    }
    printf("%lld\n",dis[n][1]);
}