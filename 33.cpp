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
    for(int i = 0;i<n;i++){
        int r=n-1;
        for(int j=i+1;j<n;j++){
            while(v[i].x+v[j].x+v[r].x>x){
                r--;
            }
            if(r<=j)break;
            if(v[i].x+v[j].x+v[r].x==x){
                printf("%lld %lld %lld\n",v[i].y,v[j].y,v[r].y);
                return 0;
            }
        }
    }
    printf("IMPOSSIBLE\n");
}
