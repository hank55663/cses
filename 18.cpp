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
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int a[200005];
    for(int i = 0;i<n;i++)scanf("%d",&a[i]);
    multiset<int> s;
    for(int i = 0;i<m;i++){
        int b;
        scanf("%d",&b);
        s.insert(b);
    }
    int ans=0;
    sort(a,a+n);
    for(int i = 0;i<n;i++){
        if(s.lower_bound(a[i]-k)!=s.end()&&*s.lower_bound(a[i]-k)<=a[i]+k){
            s.erase(s.lower_bound(a[i]-k));ans++;
        }
    }
    printf("%d\n",ans);
}