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
    int n;
    scanf("%d",&n);
    pair<pii,int> p[200005];
    
    for(int i = 0;i<n;i++){
        int l,r;
        scanf("%d %d",&l,&r);
        p[i]=mp(mp(l,r),i);
    }
    sort(p,p+n);
    multimap<int,int> m;
    int ans[200005];
    for(int i = 0;i<n;i++){
        int l,r;
        tie(l,r)=p[i].x;
        if(!m.empty()&&m.begin()->x<l){
            ans[p[i].y]=m.begin()->y;
            m.erase(m.begin());
        }
        else{
            ans[p[i].y]=m.size()+1;
        }
        m.insert(mp(r,ans[p[i].y]));
    }
    printf("%d\n",m.size());
    for(int i = 0;i<n;i++){
        printf("%d ",ans[i]);
    }
    printf("\n");
    
}