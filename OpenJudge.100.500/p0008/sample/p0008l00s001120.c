#include<stdio.h>
main(){
  int n,i,sum;
  while(scanf("%d",&n)!=EOF){
    int l=2,a[1000001]={0};
    sum=0;
    while(n>=l*l){
      if(a[l]==0){
	for(i=l+l;i<=n;i+=l){
	  a[i]=1;
	}
      }
      l++;
    }
    for(i=2;i<=n;i++){
      if(a[i]==0){
	sum++;
      }
    }
    printf("%d\n",sum);
  }
  return 0;
}
