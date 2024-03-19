#include<stdio.h>
int main(){
  int n,x,i,j,k=1,a=0;
  while(1){
    scanf("%d %d",&n,&x);
    if(n==0&&x==0)break;
    for(i=1;i<=n;i++){
      for(j=i+1;j<=n;j++){
	for(k=j+1;k<=n;k++){
	  if(i!=j&&j!=k&&k!=i){
	    if(i+j+k==x){
	      a++;
	    }
	  }
	}
      }
    }
    printf("%d\n",a);
    a=0;
  }
  return 0; 
}
  

