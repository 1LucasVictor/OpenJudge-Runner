#include<stdio.h>
int main(){
  int p[100000]={2};
  int i,j,n,c=1,s=0;
  for(i=3;i<1000000;i+=2){
    s=0;
    for(j=0;p[j]*p[j]<=i;j++){
      if(i%p[j]==0){
	s=1;
	break;
      }
    }
    if(s==0){
      p[c]=i;
      c++;
    }
  }
  p[c]=1000000;
  while(scanf("%d",&n)!=EOF){
    for(i=0;p[i]<=n;i++);
    printf("%d\n",i);
  }
  return 0;
}