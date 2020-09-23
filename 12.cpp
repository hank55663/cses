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
    int cnt[26];
    fill(cnt,cnt+26,0);
    for(int i = 0;c[i]!=0;i++)cnt[c[i]-'A']++;
    int tot=0;
    for(int i = 0;i<26;i++){
        if(cnt[i]&1)tot++;
    }
    if(tot>1){
        printf("NO SOLUTION\n");
    }
    else{
        for(int i = 0;i<26;i++){
            for(int j = 0;j<cnt[i]/2;j++){
                printf("%c",i+'A');
            }
        }
        for(int i = 0;i<26;i++){
            if(cnt[i]&1)printf("%c",i+'A');
        }
        for(int i = 25;i>=0;i--){
            for(int j = 0;j<cnt[i]/2;j++){
                printf("%c",i+'A');
            }
        }
        printf("\n");
    }
}