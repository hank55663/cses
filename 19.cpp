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
    multiset<int> s;
    for(int i = 0;i<n;i++){
        int x;
        scanf("%d",&x);
        s.insert(x);
    }
    int ans=0;
    while(s.size()){
        ans++;
        int a=*s.begin();
        s.erase(s.begin());
        if(s.upper_bound(x-a)!=s.begin()){
            s.erase(prev(s.upper_bound(x-a)));
        }
    }
    printf("%d\n",ans);
}