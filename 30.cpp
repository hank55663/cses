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
    int n,t;
    scanf("%d %d",&n,&t);
    int k[200005];
    for(int i = 0;i<n;i++){
        scanf("%d",&k[i]);
    }
    LL Max=1e18,Min=0;
    while(Max>Min+1){
        LL mid=(Max+Min)/2;
        LL tot=0;
        for(int i = 0;i<n;i++){
            tot+=mid/k[i];
            if(tot>=t)break;
        }
        if(tot>=t)Max=mid;
        else Min=mid;
    }
    printf("%lld\n",Max);
}