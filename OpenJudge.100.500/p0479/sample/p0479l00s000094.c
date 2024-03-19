#include<stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  int ans[n+1];
  int a[n+1];
  for(int i=1;i<n+1;i++)scanf("%d",&a[i]);
  
  for(int i=1;i<n+1;i++)ans[i]=0;
  for(int i=1;i<n+1;i++)ans[a[i]]++;
  for(int i=1;i<n+1;i++)printf("%d\n",ans[i]);
  
  return(0);
}
