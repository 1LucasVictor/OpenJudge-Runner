#include<stdio.h>

int main(){
  
  int a,b,k,less;
  int count=0;
    
  scanf("%d%d%d",&a,&b,&k);
  
  if(a>=b)
    less=b;
  else
    less=a;
  
  for(int i=1;i<=less;i++){

  if(a%i==0 && b%i==0){
    count++;
  if(count>=k){
   printf("%d",i);
    return 0;
  }
  }
  }
return 0;
}