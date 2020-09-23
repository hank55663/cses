#include <bits/stdc++.h>
#define x first
#define y second
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define MEM(x) memset(x,0,sizeof(x))
using namespace std;
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};
char c[1005][1005];
int dis[1005][1005];
int dis2[1005][1005];
int from[1005][1005];
char dir[10]="LRUD";
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    queue<pii> q;

    for(int i = 1;i<=n;i++){
        for(int j =1;j<=m;j++){
            dis[i][j]=1e9;
            dis2[i][j]=1e9;
        }
    }
    MEM(c);
    pii s;
    for(int i = 1;i<=n;i++){
        scanf("%s",c[i]+1);
        for(int j = 1;j<=m;j++){
            if(c[i][j]=='M'){
                dis[i][j]=0;
                q.push(mp(i,j));
            }
            if(c[i][j]=='A')s=mp(i,j);
        }
    }
    
    while(!q.empty()){
        int x,y;
        tie(x,y)=q.front();
        q.pop();
        for(int i = 0;i<4;i++){
            int xx=x+X[i],yy=y+Y[i];
            if(dis[xx][yy]>dis[x][y]+1&&c[xx][yy]=='.'){
                q.push(mp(xx,yy));
                dis[xx][yy]=dis[x][y]+1;
            }
        }
    }
    q.push(s);
    dis2[s.x][s.y]=0;
    while(!q.empty()){
        int x,y;
        tie(x,y)=q.front();
        //printf("%d %d\n",x,y);
        q.pop();
        if(x==1||x==n||y==1||y==m){
            printf("YES\n");
            vector<char> ans;
            while(mp(x,y)!=s){
                int d=from[x][y];
                ans.pb(dir[d]);
                x+=X[d];
                y+=Y[d];
            }
            printf("%d\n",ans.size());
            reverse(ans.begin(),ans.end());
            for(auto it:ans){
                printf("%c",it);
            }
            printf("\n");
            return 0;
        }
        for(int i = 0;i<4;i++){
            int xx=x+X[i],yy=y+Y[i];
          //  printf("? %d %d %d\n",xx,yy,dis[xx][yy]);
            if(dis2[xx][yy]>dis2[x][y]+1&&dis[xx][yy]>dis2[x][y]+1&&c[xx][yy]=='.'){
                q.push(mp(xx,yy));
                dis2[xx][yy]=dis2[x][y]+1;
                from[xx][yy]=i^1;
            }
        }
    }
    printf("NO\n");
}