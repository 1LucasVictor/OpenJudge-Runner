#include <stdio.h>
int main(){
  int a,b,n,gcd=1;
  
  scanf("%d%d",&a,&b);
  while(a%b!=0){
    n=a%b;
    a=b;
    b=n;
    
  }
  gcd=b; 
  printf("%d\n",gcd);		    
  return 0;
}

