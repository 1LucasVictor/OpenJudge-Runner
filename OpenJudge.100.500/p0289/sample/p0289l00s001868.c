#include<stdio.h>
int main(void){
  int a,b;
  int x,i,N;
  
  scanf("%d%d",&a,&b);
  
  if(a<=b){
    x=b%a;
    for(i=2;i<=x;i++){
      if(a%i==0 && b%i==0)N=i;
    }
  }
  
  else {
    x=a%b;
    for(i=2;i<=x;i++){
      if(a%i==0 && b%i==0)N=i;
    }
  }

  printf("%d\n",N); 

  return 0;
 
}