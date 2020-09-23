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
#include<bits/extc++.h>
using namespace __gnu_pbds;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> set_t;
int main(){
    set_t s;
    int n,k;
    scanf("%d %d",&n,&k);
    int a[200005];
    for(int i = 1;i<=n;i++){
        scanf("%d",&a[i]);
        s.insert(mp(a[i],i));
        if(i>=k){
            printf("%d ",s.find_by_order((k-1)/2)->x);
            s.erase(mp(a[i-k+1],i-k+1));
        }
    }
    printf("\n");
}
