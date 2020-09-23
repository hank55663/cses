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
    int n,k;
    scanf("%d %d",&n,&k);
    int a[200005];
    multiset<int> Max,Min;
    LL Maxsum=0,Minsum=0;
    for(int i = 1;i<=n;i++){
        scanf("%d",&a[i]);
        if(k==1){
            printf("0 ");
        }
        //s.insert(mp(a[i],i));
        else if(i>=k){
            if(Min.empty()||a[i]>=*Min.rbegin()){
                Max.insert(a[i]);
                Maxsum+=a[i];
            }
            else{
                Min.insert(a[i]);
                Minsum+=a[i];
            }
            while(Min.size()>Max.size()){
                Max.insert(*Min.rbegin());
                Maxsum+=*Min.rbegin();
                Minsum-=*Min.rbegin();
                Min.erase(Min.find(*Min.rbegin()));
            }
            while(Max.size()>Min.size()){
                Min.insert(*Max.begin());
                Minsum+=*Max.begin();
                Maxsum-=*Max.begin();
                Max.erase(Max.begin());
            }
            LL mid=*Min.rbegin();
            printf("%lld ",mid*Min.size()-Minsum+Maxsum-mid*Max.size());
            if(a[i-k+1]<=mid){
                Min.erase(Min.find(a[i-k+1]));
                Minsum-=a[i-k+1];
            }
            else{
                Max.erase(Max.find(a[i-k+1]));
                Maxsum-=a[i-k+1];
            }
        }
        else{
            Min.insert(a[i]);
            Minsum+=a[i];
        }
    }
    printf("\n");
}
