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
    LL n;
    scanf("%lld",&n);
    if((n*(n+1)/2)&1){
        printf("NO\n");
    }
    else{
        printf("YES\n");
        vector<int> v,v2;
        LL need=(n*(n+1)/4);
        for(int i=n;i>=1;i--){
            if(need<i)v2.pb(i);
            else v.pb(i),need-=i;
        }
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());
        printf("%d\n",v.size());
        for(auto it:v)printf("%d ",it);
        printf("\n");
        printf("%d\n",v2.size());
        for(auto it:v2)printf("%d ",it);
        printf("\n");
    }
}