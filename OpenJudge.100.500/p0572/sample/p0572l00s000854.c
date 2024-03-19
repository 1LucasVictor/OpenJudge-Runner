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
    ll l,r;

    scanf("%lld %lld",&l,&r);

    ll l2;
    ll r2;
    if(l<2019){
        l2=l;
    }else{
        l2=2019+l%2019;
    }

    if(r<2019){
        r2=r;
    }else{
        r2=2019+r%2019;
    }
    ll x=r/2019;
    if(l<=2019*x&&2019*x<=r){
        printf("0\n");
        return 0;
    }

    //printf("l2:%lld r2:%lld\n",l2,r2);
    ll min=5000;
    for(ll i=l2;i<=r2-1;i++){
        for(ll j=i+1;j<=r2;j++){
            //printf("i:%lld j:%lld\n",i,j);
            if((i*j)%2019<min){
                min=(i*j)%2019;
                
                /*if(min==2){
                    printf("i:%lld j:%lld\n",i,j);
                }*/
            }
        }
    }

    if(l2==r2)min=l2*(l2+1)%2019;
    

    printf("%lld\n",min);
    return 0;
}