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
char c[50];
int ans;
int vis[7][7];
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};
int XX[8]={-1,-1,-1,0,1,1,1,0};
int YY[8]={-1,0,1,1,1,0,-1,-1};
inline void dfs(int x,int y,int step){
 //   printf("%d %d\n",x,y);
    if(x<0||x>6||y<0||y>6)return;
    if(vis[x][y])return;
    if(x==6&&y==0){
        if(step==48)
        ans++;
        
        return ;
    }
    int v[8]; 
    int ok=1;
    for(int i = 0;i<8;i++){
        int xx=x+XX[i],yy=y+YY[i];
        if(xx>=0&&xx<7&&yy>=0&&yy<7&&!vis[xx][yy]){
            int cnt=0;
            for(int j=0;j<4;j++){
                int xxx=xx+X[j],yyy=yy+Y[j];
            
                if(xxx>=0&&xxx<7&&yyy>=0&&yyy<7&&!vis[xxx][yyy])cnt++;
            }
            if(cnt==1&&xx==6&&yy==0);
            else if(cnt<=1&&!vis[xx][yy])ok=0;
            v[i]=vis[xx][yy];
        }
        else{
            v[i]=1;
        }
    }
    int cnt=0;
    for(int i = 0;i<7;i++){
        if(v[i]!=v[i+1])cnt++;
    }
    if(cnt>2||!ok)return ;
    vis[x][y]=1;
    if(c[step]=='?')
    for(int j=0;j<4;j++){
        dfs(x+X[j],y+Y[j],step+1);
    }
    else{
        if(c[step]=='U')dfs(x-1,y,step+1);
        if(c[step]=='D')dfs(x+1,y,step+1);
        if(c[step]=='R')dfs(x,y+1,step+1);
        if(c[step]=='L')dfs(x,y-1,step+1);
    }
    vis[x][y]=0;
}
int main(){
    scanf("%s",c);
    dfs(0,0,0);
    printf("%d\n",ans);
}