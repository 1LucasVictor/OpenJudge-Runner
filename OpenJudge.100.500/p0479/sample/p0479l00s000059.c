#include<stdio.h>
int main(){
  int n,i;
  scanf("%d",&n);
  int a[n+1],b[n+1];
  for(i=0;i<=n;i++)
    b[i]=0;
  for(i=1;i<n;i++){
    scanf("%d",&a[i]);
    b[a[i]]++;
  }
  for(i=1;i<=n;i++)
    printf("%d\n",b[i]);
  return 0;
}
