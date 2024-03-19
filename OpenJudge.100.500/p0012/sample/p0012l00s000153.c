#include<stdio.h>
int main(){
  int a[1000],b[1000],i=0,j=0,t,n;
  while(scanf("%d",&t)!=EOF){
    if(t!=0){
      a[i]=t;
      i++;
    }
    else if(t==0){
      i--;
      b[j]=a[i];
      j++;
    }
  }
  for(n=0;n<j;n++){
    printf("%d\n",b[n]);
  }
  return (0);
}