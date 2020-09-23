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
char d[10]="RLDU";
int from[1005][1005];
int dis[1005][1005];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 1;i<=n;i++){
        scanf("%s",c[i]+1);
    }
    queue<pii> q;
    pii end;
        MEMS(dis);
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(c[i][j]=='A'){
                end=mp(i,j);
                //q.push(mp(i,j));
            }
            if(c[i][j]=='B'){
                q.push(mp(i,j));
                dis[i][j]=0;
            }
        }
    }

    while(!q.empty()){
        pii p=q.front();
        q.pop();
       // printf("%d %d %d\n",p.x,p.y,dis[p.x][p.y]);
        for(int i = 0;i<4;i++){
            int x=X[i]+p.x,y=Y[i]+p.y;
            //printf("%d %d %d\n",x,y,dis[x][y]);
            if(x>0&&x<=n&&y>0&&y<=m&&dis[x][y]==-1&&c[x][y]!='#'){
               //  printf("%d %d %d\n",x,y,dis[x][y]);
                dis[x][y]=dis[p.x][p.y]+1;
                from[x][y]=i^1;
                q.push(mp(x,y));
            }
        }
    }
    if(dis[end.x][end.y]==-1){
        printf("NO\n");
    }
    else{
             pii now=end;
        printf("YES\n%d\n",dis[now.x][now.y]);
   
        
        while(c[now.x][now.y]!='B'){
            printf("%c",d[from[now.x][now.y]]);
            int x=from[now.x][now.y];
            now.x+=X[x];
            now.y+=Y[x];
        }
        printf("\n");
    }
}
