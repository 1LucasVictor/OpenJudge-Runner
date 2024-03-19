#include <stdio.h>
#include <memory.h>
int main(void){
  int n,i,j,k,ans=-100001;
  int a[5000],t[5000];
  while(1){  
    scanf("%d",&n);
    if(!n)
      break;
    ans=-100001;
    memset(a,0,sizeof(a));
    memset(t,0,sizeof(t));
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      t[i]=a[i];
      if(ans<a[i])
	ans=a[i];
    }
    for(i=1;i<n;i++){
      for(j=0;j<n-i;j++){
	t[j]=t[j]+a[i+j];
	if(ans<t[j])
	  ans=t[j];
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}