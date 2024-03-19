#include<stdio.h>
int main(){
  int n,x,cou=0;
  int i,j,k;
  
  while(1){
    scanf("%d %d",&n,&x);
    if(n==0 && x==0)break;
  for(i=1;i<=n;i++){
    for(j=i+1;j<=n;j++){
      for(k=j+1;k<=n;k++){
	if(j+k+i==x)cou++;
      }
    }
  }
  i=0;
  i=cou;
  printf("%d\n",i);
  }
  return 0;
}