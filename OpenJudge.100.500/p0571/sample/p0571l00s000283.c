#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef long long int ll;
void swap(ll *x,ll *y){ll temp;temp=*x;*x=*y;*y=temp;}
ll asc(const void *a,const void *b){return *(ll*)a-*(ll*)b;}
ll desc(const void *a,const void *b){return *(ll*)b-*(ll*)a;}
ll max(ll x,ll y){return x>y?x:y;}
ll min(ll x,ll y){return x>y?y:x;}

int main(){
    int n,a,b;
    
    scanf("%d %d %d",&n,&a,&b);
    int ans1=n*a;
    int ans2=b;

    if(ans1>ans2)printf("%d\n",ans2);
    else printf("%d\n",ans1);
    return 0;

}