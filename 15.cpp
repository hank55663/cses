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
char c[8][10];
int cnt[8][10];
int ans;
void go(int x){
    if(x==8){
        ans++;
        return ;
    }
    for(int j = 0 ; j < 8 ; j++){
        if(cnt[x][j]==0&&c[x][j]=='.'){
            for(int a=0;a<8;a++){
                for(int b=0;b<8;b++){
                    int aa=abs(a-x),bb=abs(b-j);
                    if(aa==bb||aa==0||bb==0)cnt[a][b]++;
                }
            }
            go(x+1);
             for(int a=0;a<8;a++){
                for(int b=0;b<8;b++){
                    int aa=abs(a-x),bb=abs(b-j);
                    if(aa==bb||aa==0||bb==0)cnt[a][b]--;
                }
            }
        }
    }
}
int main(){
    for(int i = 0;i<8;i++)scanf("%s",c[i]);
    go(0);
    printf("%d\n",ans);
}