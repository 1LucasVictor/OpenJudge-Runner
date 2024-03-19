#include<stdio.h>
int main(){
  int n,x,l[100000],i,s=0,a=0;
  scanf("%d %d",&n,&x);
  for(i=1;i<=n;i++){
    scanf("%d",&l[i]);
    s+=l[i];
    if(s>x&&a==0) a=i;
  }
  printf("%d",a);
  return 0;
}
     
    
