#include<stdio.h>
#define PMAX 1000000000
int wmax=0;
int n,k,w[100000];
 
int check(int P){
    int i;
    int count=1,now=P;
    if(P<wmax) return 0;
    for(i=0;i<n;i++){
        if(now>=w[i]){
           now-=w[i];
        }else{
            count++;
            now=P-w[i];
        }
    }
    if(count>k) return 0;
    else return 1;
}
 
int main(void){
    int i;
    int left,right,mid;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&w[i]);
        if(w[i]>wmax) wmax=w[i];
    }
 
    left=0,right=PMAX;
    while(right-left>1){
        mid=(left+right)/2;
        if( check(mid) ) right=mid;
        else left=mid;
    }
    printf("%d\n",right);
    return 0;
}
