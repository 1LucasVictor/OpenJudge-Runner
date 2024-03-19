#include<stdio.h>
int main(){

  int n;
  scanf("%d",&n);
  int a[n],ans[n],i;
  for(i=0;i<n;i++){
    a[i]=0;
    ans[i]=0;
  }
  for(i=1;i<n;i++)scanf("%d",&a[i]);



  for(i=1;i<n;i++){
    ans[a[i]-1]++;
  }
  for(i=0;i<n;i++){
    printf("%d\n",ans[i]);
  }
}
