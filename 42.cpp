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
int a[400005];
vector<int> v[400005];
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    map<int,int> m;
    pii p[200005];
    for(int i = 0;i<n;i++){
        int l,r;
        scanf("%d %d",&l,&r);
        p[i]=mp(l,r);
        m[l];
        m[r];
    }
    int index=0;
    for(auto &it:m){
        it.y=++index;
    }
    for(int i = 0;i<n;i++){
        a[m[p[i].x]]++;
        a[m[p[i].y]]--;
        v[m[p[i].x]].pb(m[p[i].y]);
    }
    int ans=n;
    int sum=0;
    multiset<int> s;
    for(int i = 1;i<=index;i++){
        sum+=a[i];
        for(auto it:v[i])s.insert(it);
        while(sum>k){
            sum--;
            ans--;
            a[*s.rbegin()]++;
            s.erase(s.find(*s.rbegin()));
        }
    }
    printf("%d\n",ans);
}
