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
    char c[1000005];
    scanf("%s",c);
    char last='a';
    int cnt=0;
    int ans=0;
    for(int i= 0;c[i]!=0;i++){
        if(c[i]!=last){
            cnt=0;
            last=c[i];
        }
        cnt++;
        ans=max(ans,cnt);
    }
    printf("%d\n",ans);
}
/*




*/