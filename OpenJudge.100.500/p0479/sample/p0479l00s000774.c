#include<stdio.h>

int ans[200010];

int main(void){
  int n;
  scanf("%d",&n);
 
  int a[n];
  for(int i=1;i<n+1;i++)scanf("%d",&a[i]);
  
  
  for(int i=1;i<n+1;i++)ans[a[i]]++;
  for(int i=1;i<n+1;i++)printf("%d\n",ans[i]);
  
  return(0);
}
