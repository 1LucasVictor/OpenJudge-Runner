#include<stdio.h>
int main(void){
  int a,b;
  int x,i,N;
  
  scanf("%d%d",&a,&b);
  if(a>=1 && a<=10^9 && b>=1 && b<=10^9){
    if(a<=b){
      x=b%a;
      for(i=1;i<=x;i++){
	if(a%i==0 && x%i==0)N=i;
      }
    }
  
    else {
      x=a%b;
      for(i=1;i<=x;i++){
	if(b%i==0 && x%i==0)N=i;
      }
    }
  }
  printf("%d\n",N); 
  return 0; 
}