#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define N 100000000000

int z[1000000];

int main(){

  int n,k,i,v=0,w=N,ans=N;

  scanf("%d %d",&n,&k);
  for(i=0; i<n; i++){
   scanf("%d",&z[i]);
  }

  while(v+1<w) {

    int cnt=0,max=0,sum=0;
    int mid=(v+w)/2;
    for(i=0; i<n; i++) {
      if(sum+z[i]>mid) {
	    if(cnt<k-1) {
	     cnt++;
	     sum=0;
     	}
    }
    sum+=z[i];
    if(max<sum) {
      max=sum;
    }
  }
    if(ans>max) {
      ans=max;
    }
    if(max<=mid){
       w=mid;
     }
    else v=mid;
  }

  printf("%d\n",ans);
  return 0;
}

