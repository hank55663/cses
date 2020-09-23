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
    int x,n;
    scanf("%d %d",&x,&n);
    set<int> s;
    multiset<int> s2;
    s.insert(0);
    s.insert(x);
    s2.insert(x);
    for(int i = 0;i<n;i++){
        int a;
        scanf("%d",&a);
        auto it=s.lower_bound(a);
        auto it2=prev(it);
        s2.erase(s2.find(*it-*it2));
        s2.insert(a-*it2);
        s2.insert(*it-a);
        s.insert(a);
        printf("%d ",*s2.rbegin());
    }
    printf("\n");
    
}