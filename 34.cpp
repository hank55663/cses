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
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    vector<pll> v;
    for(int i = 0;i<n;i++){
        int a;
        scanf("%d",&a);
        v.pb(mp(a,i+1));
    }
    sort(v.begin(),v.end());
    map<int,pii> m;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(m.find(x-v[i].x-v[j].x)!=m.end()){
                pii p=m[x-v[i].x-v[j].x];
                printf("%d %d %lld %lld\n",p.x,p.y,v[i].y,v[j].y);
                return 0;
            }
        }
        for(int j=0;j<i;j++){
            m[v[i].x+v[j].x]=mp(v[i].y,v[j].y);
        }
    }
    printf("IMPOSSIBLE\n");
}
