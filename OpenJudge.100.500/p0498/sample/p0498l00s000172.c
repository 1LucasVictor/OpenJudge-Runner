#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define max(x,y)(x>y?x:y)
#define min(x,y)(x>y?y:x)
#define MOD (int)1e9+7
int dx4[]={1,0,-1,0};
int dy4[]={0,-1,0,1};
typedef long long int ll;
typedef unsigned long long int ull;
ll gcd(ll x,ll y){if(!y)return x;return gcd(y,x%y);}
ll lcm(ll x,ll y){return x/gcd(x,y)*y;}
void swap(ll *x,ll *y){ll tmp=*x;*x=*y;*y=tmp;}
int asc_cmp(const void* X,const void* Y){ll x=*(int*)X,y=*(int*)Y;if(x<y)return -1;else if(x==y)return 0;else return 1;}
int desc_cmp(const void* X,const void* Y){ll x=*(int*)X,y=*(int*)Y;if(x<y)return 1;else if(x==y)return 0;else return -1;}

int main(){
    int n;scanf("%d",&n);
    printf("%d\n",n%2?n/2+1:n/2);
}