#include<bits/stdc++.h>
#define pii pair<int,int>
#define x first
#define y second
#define LL long long
#define pb push_back
#define mp make_pair
using namespace std;
LL dis[100005];
vector<pii> v[100005];
int inq[100005];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 0;i<m;i++){
        int x,y,c;
        scanf("%d %d %d",&x,&y,&c);
        v[x].pb(mp(y,c));
    }
    deque<int> q;
    q.pb(1);
    fill(dis,dis+n+1,1e18);
    dis[1]=0;
    q.pb(1);
    while(!q.empty()){
        int x;
        if(dis[q.back()]<dis[q.front()]){
            x=q.back();
            q.pop_back();
        }
        else{
        x=q.front();
        q.pop_front();
        }
        inq[x]=0;
        for(auto it:v[x]){
            if(dis[it.x]>dis[x]+it.y){
                dis[it.x]=dis[x]+it.y;
                if(!inq[it.x]){
                    inq[it.x]=1;
                    q.pb(it.x);
                }
            }
        }
    }
    for(int i = 1;i<=n;i++){
        printf("%lld ",dis[i]);
    }
    printf("\n");
}