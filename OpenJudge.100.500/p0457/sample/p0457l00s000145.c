#include<stdio.h>
int main(){
  int n,m,k,i,anum=0;
  scanf("%d%d%d",&n,&m,&k);
  int a[n+1],check=0,max=0;
  int b[m+1];
  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    if(k-a[i]>=0 && check==0){
      anum=i;
      k-=a[i];
    }
    else
      check=1;
  }
  max=anum;
  for(i=1;i<=m;i++)
    scanf("%d",&b[i]);
  for(i=1;i<=m;i++){
    while(k<b[i]){
      k+=a[anum];
      anum--;
      if(anum<1)
        break;
    }
    if(anum<0)
      break;
    k-=b[i];
    if(i+anum>max)
      max=i+anum;
  }
  printf("%d\n",max);
  return 0;
}
