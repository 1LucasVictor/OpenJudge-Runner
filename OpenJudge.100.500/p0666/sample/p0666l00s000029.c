#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef long long int ll;
void swap(ll *x,ll *y){ll temp;temp=*x;*x=*y;*y=temp;}
ll compare_asc(const void *a,const void *b){return *(ll*)a-*(ll*)b;}
ll compare_desc(const void *a,const void *b){return *(ll*)b-*(ll*)a;}
ll max(ll x,ll y){return x>y?x:y;}
ll min(ll x,ll y){return x>y?y:x;}
/*void qsort(配列のアドレス,配列のサイズ,sizeof(配列の型),比較関数(昇順or降順)) */

int main(){
    ll a,b,x;
    scanf("%lld %lld %lld",&x,&a,&b);

    ll day=b-a;
    if(a>=b)printf("delicious\n");
    else if(day<=x)printf("safe\n");
    else printf("dangerous\n");

    return 0;
}