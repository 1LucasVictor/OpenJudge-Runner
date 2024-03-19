#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define mod 1000000007
#define limit 200001
typedef long long ll;
typedef long double ld;
#define rep(i,n) for(i = 0; i < n; i++)
#define max(a,b) {if(a>b){return a;}return b;}
#define min(a,b) {if(a<b){return a;}return b;}
int up_int(const void *a, const void *b){return *(int*)a - *(int*)b;}
int down_int(const void *a, const void *b){return *(int*)b - *(int*)a;}
int up_char(const void *left, const void *right) {return strcmp((char *)left,(char *)right);}
int down_char(const void *left, const void *right) {return strcmp((char *)right,(char *)left);}

int main(){
    ll a;
    double b;
    ll ans;
    
    scanf("%lld %lf",&a,&b);
    
    ans = (long long int)(a*b);
    printf("%lld\n",ans);
    return 0;
}

