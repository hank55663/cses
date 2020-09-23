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
    if(n==1)printf("1\n");
    else if(n<=3)printf("NO SOLUTION\n");
    else if(n==4)printf("3 1 4 2\n");
    else{
        for(int i = 1;i<=n;i+=2)printf("%d ",i);
        for(int i=  2;i<=n;i+=2)printf("%d ",i);
        printf("\n");
    }
}