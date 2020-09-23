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
int f[200005];
int Find(int x){
    if(f[x]==x)return x;
    return f[x]=Find(f[x]);
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)f[i]=i;
    for(int i = 0;i<m;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        f[Find(x)]=Find(y);
    }
    vector<int> v;
    for(int i = 1;i<=n;i++){
        if(Find(i)==i)v.pb(i);
    }
    printf("%d\n",v.size()-1);
    for(int i = 1;i<v.size();i++){
        printf("%d %d\n",v[i-1],v[i]);
    }
}
