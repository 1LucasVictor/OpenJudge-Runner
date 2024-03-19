#include<stdio.h>
#define PMAX 1000000000
int w[100000],wmax;
int f(int p,int n,int k){
    int now=p,count=1;
    int i;
 
    if(p<wmax) return 0;
    for(i=0;i<n;i++){
	if(now>=w[i]){
	    now-=w[i];
	}else{
	    count++;
	    now=p-w[i];
	}
    }
    if(count>k) return 0;
    else return 1;
}
    
int main(void){
    int n,k,i;
    int left,right,mid;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
	scanf("%d",&w[i]);
	if(w[i]>wmax) wmax=w[i];
    }

    left=1;right=PMAX;
    while(left<right){
	mid=(left+right)/2;
	if( f(mid,n,k) ) right=mid;
	else left=mid+1;
    }

    printf("%d\n",right);
    return 0;
}