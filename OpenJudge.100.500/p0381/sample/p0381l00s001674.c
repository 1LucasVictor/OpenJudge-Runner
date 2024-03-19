#include<stdio.h>
int main(void)
{
  int n,x,i,j,p;
  int k=0;
  while(1){
    scanf("%d %d",&n,&x);
    if(n==0 && x==0) break;
    else{
         for(i=1;i<=n;i++){
	   for(j=i+1;j<=n;j++){
	     for(p=j+1;p<=n;p++){
	       if(i+j+p==x) k++;
	     }
	   }
	 }
	 printf("%d\n",k);
    }
  }
  return 0;
}