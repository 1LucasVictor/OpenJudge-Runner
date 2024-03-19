#include<stdio.h>
int main(){
  int n,m,i,j,k,check=0;
  scanf("%d%d",&n,&m);
  int a[n+1];
  for(i=0;i<n;i++)
    a[i]=10;
  for(i=0;i<m;i++){
    scanf("%d%d",&j,&k);
    if(a[j-1]==10)
      a[j-1]=k;
    else if(a[j-1]!=k)
      check=-1;
  }
  if(check==-1 || a[0]==0)
    printf("-1\n");
  else
    for(i=0;i<n;i++){
      if(a[i]==10)
        a[i]=0;
      printf("%d",a[i]);
    }
  return 0;
}
    
    