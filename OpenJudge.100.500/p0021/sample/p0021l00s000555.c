#include<stdio.h>

int main(void){
  int n,sum,max;
  int i;
  while(1){
    scanf("%d",&n);
    if(n==0)  break;
    else{
      int a[n];
      sum=0;
      max=0;
      for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	sum+=a[i];
	//printf("//%d %d\n",a[i],sum);
	if(sum<a[i]){
	  sum=a[i];
	}
	if(sum>max){
	  max=sum;
	}
      }
      printf("%d\n",max);
    }
  }
  return 0;
}