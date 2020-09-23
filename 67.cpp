#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL dis[505][505];
int main(){
    int n,m,q;
    scanf("%d %d %d",&n,&m,&q);
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++)dis[i][j]=1e18;
        dis[i][i]=0;
    }
    for(int i = 0;i<m;i++){
        int x,y,c;
        scanf("%d %d %d",&x,&y,&c);
        dis[x][y]=dis[y][x]=min(dis[x][y],c*1ll);
    }
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k = 1;k<=n;k++){
                dis[j][k]=min(dis[j][k],dis[j][i]+dis[i][k]);
            }
        }
    }
    while(q--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(dis[a][b]==1e18){
            dis[a][b]=-1;
        }
        printf("%lld\n",dis[a][b]);
    }
}