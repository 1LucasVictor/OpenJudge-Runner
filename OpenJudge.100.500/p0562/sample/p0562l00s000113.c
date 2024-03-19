/*2019/08/25 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MOD 1000000007
#define MIN 999999999
#define MAX -999999999
typedef long long int ll;
typedef unsigned long long int ull;
void llswap(ll *x,ll *y){ll temp;temp=*x;*x=*y;*y=temp;}
void swap(int *x,int *y){int tmp;tmp=*x;*x=*y;*y=tmp;}
int rmax(int x,int y){return x>y?x:y;}
int rmin(int x,int y){return x>y?y:x;}
ll llrmax(ll x,ll y){return x>y?x:y;}
ll llrmin(ll x,ll y){return x>y?y:x;}
int asc(const void *a,const void *b){return *(int*)a-*(int*)b;}
int desc(const void *a,const void *b){return *(int*)b-*(int*)a;}
int llasc(const void *a,const void *b){return *(ll*)a-*(ll*)b;}
int lldesc(const void *a,const void *b){return *(ll*)b-*(ll*)a;}
/*
int asc_t(const void *a,const void *b){return ((struct_t*)a)->member - ((struct_t*)b)->member;}
int desc_t(const void *a,const void *b){return ((struct_t*)b)->member - ((struct_t*)a)->member;}
*/

int main(){
    int a,b;

    scanf("%d %d",&a,&b);
    int cnt=0;
    for(int i=0;i<b;i+=a,cnt++);

    printf("%d\n",cnt);
    return 0;
}