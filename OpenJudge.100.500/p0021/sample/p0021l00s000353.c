#include<stdio.h>
int main(){
  int n,i,j,total,ans;
  int a[111111];
  while(1){
    ans = -111111;
    scanf("%d",&n);
    if(n==0) break;
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    ans = 0;
    for(i=0;i<n;i++){
      total = 0;
      for(j=i;j<n;j++){
	total += a[j];
	if(total > ans){
	  ans = total;
	}
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}