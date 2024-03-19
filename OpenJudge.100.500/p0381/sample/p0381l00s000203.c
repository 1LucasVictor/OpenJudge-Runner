#include<stdio.h>
int main(){
  int i,j,n,x,count=0,b;
  while(1){
    scanf("%d %d",&n,&x);
    if(n==0&&x==0){
      break;
    }
    for(i=1;i<=n;i++){
      for(j=i+1;j<=n;j++){
	for(b=j+1;b<=n;b++){
	  if(i+j+b==x){
	    count++;
	  }
	}
      }
    }
    printf("%d\n",count);
  }
  return (0);
}